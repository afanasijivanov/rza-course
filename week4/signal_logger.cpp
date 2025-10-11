#include "signal_logger.h"
#include <iostream>
#include <vector>
//Added
#include <chrono>
#include <iomanip>  
#include <sstream>
namespace rza_course {
namespace week4 {

SignalLogger::SignalLogger(const std::string& filename) : filename_(filename) {
 
  if (filename.empty()) {
    std::cout << "Error: filename is empty" << std::endl;
      return ;
  }
  
  /* code */
  log_file_.open(filename_);
  if (!log_file_.is_open()) {
    std::cerr << "Error: Could not open file " << filename_ << std::endl;
  }
}

SignalLogger::~SignalLogger() {
  if (log_file_.is_open()) {
    log_file_.close();
  }
}

void SignalLogger::LogSignalState(int32_t state) {
  if (log_file_.is_open()) {
    log_file_ << state << std::endl;
  } else {
    std::cerr << "Error: Log file is not open" << std::endl;
  }
}

void SignalLogger::LogSignalStates(const std::vector<int32_t>& states) {
  if (log_file_.is_open()) {
    for (const auto& state : states) {
      log_file_ << state << std::endl;
    }
  } else {
    std::cerr << "Error: Log file is not open" << std::endl;
  }
}

void SignalLogger::LogSignalWithTimestamp (int32_t state) {
  if (log_file_.is_open()) {
    
    // Get time
    auto now = std::chrono::system_clock::now();
    auto time_t = std::chrono::system_clock::to_time_t(now);
    
    // Make readable
    std::tm tm_buf;
    localtime_r(&time_t, &tm_buf);
    
    std::ostringstream timestamp;
    timestamp << std::put_time(&tm_buf, "%Y-%m-%d %H:%M:%S");
    
    // Write time with signals_states
    log_file_ << "[" << timestamp.str() << "] Signal: " << state << std::endl;
  } else {
    std::cerr << "Error: Log file is not open" << std::endl;
  }  

}
/* 
void SignalLogger::GetLogFileSize(long) {
  if (log_file_.is_open()){

  }
} */

}  // namespace week4
}  // namespace rza_course