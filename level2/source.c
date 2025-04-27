#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void p(void) {
  char str[76];
  void *return_addr;
  fflush(stdout);
  gets(str);
  return_addr = __builtin_return_address(0);
  if (((uintptr_t)return_addr & 0xb0000000) == 0xb0000000) {
    printf("(%p)\n", return_addr);
    exit(1);
  }
  puts(str);
  strdup(str);
  return;
}

int main(void) {
  p();
  return (0);
}
