#include <iostream>
#include "../core/Core.h"

int main() {
  Core core;
  std::cout << "Working Test Code: " << core.GetStatus() << '\n';
  return 0;
}