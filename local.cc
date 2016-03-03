#include "local/local.h"
#include <iostream>

int main(int argc, char** argv) {
  std::cout << "Hello, " << local::world() << std::endl;
}
