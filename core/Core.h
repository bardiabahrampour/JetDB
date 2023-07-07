#pragma once

#include "api.h"

class CORE_API Core {
 public:
  Core();
  void CoreMain();
  int __fastcall GetStatus();
 private:
  int status_code{};
};