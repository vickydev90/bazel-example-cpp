#include "external/remote/remote.h"
#include <iostream>

int main(int argc, char** argv) {
  std::cout << "Hello, " << remote::world() << std::endl;
}
