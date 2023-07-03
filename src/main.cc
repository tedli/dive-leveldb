#include "include/build_version.h"

#include <iostream>


int main(int argc, char** argv) {
  std::cout << "Hello, World!, " << build_compile_date << std::endl;
  return 0;
}
