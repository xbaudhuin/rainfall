#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main(int ac, char **av) {
  char buffer[132];
  FILE *file;
  file = fopen("/home/user/end/.pass", "r");
  memset(buffer, 0, sizeof(buffer));
  if (file == 0 || ac != 2)
    return -1;
  fread(buffer, 1, 66, file);
  buffer[65] = '\0';
  buffer[atoi(av[1])] = '\0';
  fread(&buffer[66], 1, 41, file);
  fclose(file);
  if (strcmp(buffer, av[1]) == 0) {
    execl("/bin/sh", "sh", 0);
  } else {
    puts(&buffer[66]);
  }
  return (0);
}
