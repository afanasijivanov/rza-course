#include <iostream>
#include <vector>
#include "signal_logger.h"


namespace rza_course {
namespace week4 {

void TestSignalLogger() {
  // Create a logger that writes to "signal_log.txt"
  SignalLogger logger("signal_log.txt");
  
  // Log some signal states
  std::vector<int32_t> signal_states = {1, 0, 1, 1, 0, 1, 0, 0, 1};
  
  std::cout << "Logging signal states: ";
  for (const auto& state : signal_states) {
    std::cout << state << " ";
    logger.LogSignalState(state);
  }
  std::cout << std::endl;
  
  // Log more states
  logger.LogSignalStates(signal_states);
 
  // Log with time
   std::cout << "Logging signals with timestamps..." << std::endl;
  for (const auto& state : signal_states) {
    logger.LogSignalWithTimestamp(state);
  }
  std::cout << "Signal log written to signal_log.txt" << std::endl;
}

}  // namespace week4
}  // namespace rza_course

int main() {
  rza_course::week4::TestSignalLogger();
  return 0;
}