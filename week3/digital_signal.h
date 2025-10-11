#ifndef RZA_COURSE_WEEK3_DIGITAL_SIGNAL_H_
#define RZA_COURSE_WEEK3_DIGITAL_SIGNAL_H_

#include <cstdint>

namespace rza_course {
namespace week3 {

// Class representing a digital signal with value storage
class DigitalSignal {
 public:
  // Constructor
  explicit DigitalSignal(int32_t initial_value = 0);
  
  // Destructor
  ~DigitalSignal();
  
  // Set the signal value
  void SetValue(int32_t value);
  
  // Get the signal value
  int32_t GetValue() const;
  
  //Toggle signal value between 0 and 1
  void ToggleValue(int32_t value);

  //1 is True
  bool IsHigh() const;

 private:
  int32_t value_;
};

}  // namespace week3
}  // namespace rza_course

#endif  // RZA_COURSE_WEEK3_DIGITAL_SIGNAL_H_