#include <stdio.h>
#include <string.h>
#include <unistd.h>

char *p(char *var, char *str) {
  char s1[4104];
  puts(str);
  read(0, s1, 4096);
  *strchr(s1, '\n') = '\0';
  return strncpy(var, s1, 20);
}

char *pp(char *buf) {
  char var1[20];
  char var2[20];

  p(var1, "~");
  p(var2, "~");
  strcpy(buf, var1);
  int len = strlen(buf);
  buf[len] = ' ';
  buf[len + 1] = '\0';
  return strcat(buf, var2);
}

int main(void) {
  char buf[42];
  pp(buf);
  puts(buf);
  return 0;
}
