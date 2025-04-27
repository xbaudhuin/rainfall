#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int n(void) { return system("/bin/cat /home/user/level7/.pass"); }

int m() { return (puts("Nope")); }

int main(int ac, char **av) {
  char *dest;
  int (**func_ptr)();

  dest = (char *)malloc(0x40);
  func_ptr = (void *)malloc(4);
  *func_ptr = (int (*)())m;

  strcpy(dest, *(char **)(av[1]));
  return (*func_ptr)();
}
