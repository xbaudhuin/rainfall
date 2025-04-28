#include <stdio.h>

int main() {
  for (int i = -1; i < 0; i--) {
    if ((unsigned int)(i * 4) == 44) {
      printf("i = %d;\n", i);
    }
  }
  return 0;
}
