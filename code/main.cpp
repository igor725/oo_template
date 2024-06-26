#include "log.h"

#include <exception>
#include <sstream>

extern "C" void helloworld_c();

// Logging
std::stringstream debugLogStream;

int main(int argc, char *argv[]) {
  // No buffering
  setvbuf(stdout, NULL, _IONBF, 0);

  // Show hello world
  DEBUGLOG << "[C++] Hello, World!";
  helloworld_c();
  return 0;
}
