#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void run(void) {
  fwrite("Good... Wait what?\n", 1, 19, stdout);
  system("/bin/sh");
  return;
}

int main(void) {
  char str[76];
  gets(str);
  return 0;
}
