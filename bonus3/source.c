#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main(int ac, char **av) {
  char ptr[132];
  FILE *f;
  f = fopen("/home/user/end/.pass", "r");
  memset(ptr, 0, sizeof(ptr));
  if (f == 0 || ac != 2)
    return -1;
  fread(ptr, 1, 66, f);
  ptr[65] = '\0';
  ptr[atoi(av[1])] = '\0';
  fread(&ptr[66], 1, 41, f);
  fclose(f);
  if (strcmp(ptr, av[1]) == 0) {
    execl("/bin/sh", "sh", 0);
  } else {
    puts(&ptr[66]);
  }
  return (0);
}
