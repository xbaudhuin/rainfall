#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int m;

void v(void) {
  char buf[520];
  fgets(buf, 512, stdin);
  printf(buf);
  if (m == 64) {
    fwrite("Wait what?!\n", 1, 12, stdout);
    system("/bin/sh");
  }
  return;
}

int main(void) {
  v();
  return 0;
  ;
}
