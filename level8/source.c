#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

char *auth;
void *service;

int main(void) {
  char input[5];
  char cpy[2];
  char str[129];

  while (1) {
    printf("%p, %p \n", auth, service);
    if (fgets(input, 128, stdin) == 0)
      break;
    if (memcmp(input, "auth ", 5) == 0) {
      auth = malloc(4);
      auth = NULL;
      if (strlen(cpy) <= 30)
        strcpy(auth, cpy);
    }
    if (memcmp(input, "reset", 5) == 0) {
      free(auth);
    }
    if (memcmp(input, "service", 6) == 0) {
      service = strdup(str);
    }
    if (memcmp(input, "login", 5) == 0) {
      if ((int *)(auth + 8) != 0) {
        system("/bin/sh");
      } else {
        fwrite("Password:\n", 1, 10, stdout);
      }
    }
  }
  return 0;
}
