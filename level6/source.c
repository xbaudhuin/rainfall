#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

void n(void)

{
  system("/bin/cat /home/user/level7/.pass");
  return;
}

void m(void *param_1, int param_2, char *param_3, int param_4, int param_5)

{
  puts("Nope");
  return;
}

int main(int param_1, char **param_2)

{
  char *__dest;
  void *puVar1;

  __dest = (char *)malloc(0x40);
  puVar1 = (void *)malloc(4);
  puVar1 = &m;
  strcpy(__dest, *(char **)(param_2 + 4));
  *puVar1();
  return;
}
