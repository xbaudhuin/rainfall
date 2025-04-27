#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

char c[80];

int m() {
  time_t current_time;
  current_time = time(0);
  return printf("%s - %d\n", c, current_time);
}

int main(int ac, char **av) {
  FILE *file;
  void *var2;
  void *var1 = malloc(8);
  *(int *)var1 = 1;                 // var1[0] = 1
  *((void **)var1 + 1) = malloc(8); // var[1] = malloc(8)

  var2 = malloc(8);
  *(int *)var2 = 2;
  *((void **)var2 + 1) = malloc(8);

  strcpy(*((char **)var1 + 1), av[1]);
  strcpy(*((char **)var2 + 1), av[2]);

  file = fopen("/home/user/level8/.pass", "r");
  fgets(c, 68, file);
  puts("~~");
  return 0;
}
