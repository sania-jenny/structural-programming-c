#include <stdio.h>

int main() {
#ifndef DEBUG
  printf("Debug mode is OFF\n");
#endif
  return 0;
}
