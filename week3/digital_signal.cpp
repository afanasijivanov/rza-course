#include "digital_signal.h"

namespace rza_course {
namespace week3 {

DigitalSignal::DigitalSignal(int32_t initial_value) : value_(initial_value) {}

DigitalSignal::~DigitalSignal() = default;

void DigitalSignal::SetValue(int32_t value) {
  value_ = value;
}

int32_t DigitalSignal::GetValue() const {
  return value_;
}

void DigitalSignal::ToggleValue(int32_t value) {
  value_ = 1 - value;
}

bool DigitalSignal::IsHigh() const{
  return value_ == 1;
}
  

}  // namespace week3
}  // namespace rza_course