#include "submodule/src/bare/bare.h"
#include <iostream>

int main(int argc, char** argv) {
  std::cout << "Hello, " << bare::world() << std::endl;
}
