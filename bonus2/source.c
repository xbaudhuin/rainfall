#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int language = 0;

int greetuser(char src) {

  char dest[64];
  int a;
  char b[4];

  if (language == 1) {
    strcpy(dest, "Hyvää päivää ");
  } else if (language == 2) {
    strcpy(dest, "Goedemiddag! ");
  } else if (language == 0) {
    strcpy(dest, "Hello ");
  }
  strcat(dest, &src);
  return puts(dest);
}

int main(int ac, char **av) {
  char str[76];
  char dest[76];
  char *lang;

  if (ac != 3)
    return 1;
  memset(dest, 0, sizeof(dest));
  strncpy(dest, av[1], 40);
  strncpy(&dest[40], av[2], 32);
  lang = getenv("LANG");
  if (lang) {
    if (memcmp(lang, "fi", 2) == 0) {
      language = 1;
    } else if (memcmp(lang, "nl", 2) == 0) {
      language = 2;
    }
  }
  memcpy(str, dest, sizeof(str)); // adress of memcpy: &stack0xffffff50 not plt
  return (greetuser(str[0]));
}
