#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main(int ac, char **av) {

  char str[40];
  int nb;
  int flag;

  nb = atoi(av[1]);
  if (nb < 10) {
    memcpy(str, av[2], nb * 4); // <= 36
    if (nb == 1464814662) {     // 0x574f4c46
      execl("/bin/sh", "sh", 0);
    }
    flag = 0;
  } else {
    flag = 1;
  }
  return flag;
}
