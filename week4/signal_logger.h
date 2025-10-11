#ifndef RZA_COURSE_WEEK4_SIGNAL_LOGGER_H_
#define RZA_COURSE_WEEK4_SIGNAL_LOGGER_H_

#include <string>
#include <fstream>
#include <vector>
namespace rza_course {
namespace week4 {

// Class for logging digital signal states to a file
class SignalLogger {
 public:
  // Constructor that opens the log file
  explicit SignalLogger(const std::string& filename);
  
  // Destructor that closes the log file
  ~SignalLogger();
  
  // Log a signal state (0 or 1)
  void LogSignalState(int32_t state);
  
  // Log multiple signal states
  void LogSignalStates(const std::vector<int32_t>& states);

  // Log with time
  void LogSignalWithTimestamp(int32_t state);

  // Size of LogFile
  void GetLogFileSize(long);
  
 private:
  std::ofstream log_file_;        
  std::string filename_;
};

}  // namespace week4
}  // namespace rza_course

#endif  // RZA_COURSE_WEEK4_SIGNAL_LOGGER_H_