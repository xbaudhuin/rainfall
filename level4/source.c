#include <stdio.h>
#include <stdlib.h>

int m;

int p(char *str) { 
  return printf(str); 
}

int n(void) {
  char str[520];

  fgets(str, 512, stdin);
  p(str);
  if (m == 16930116)
    return system("/bin/cat /home/user/level5/.pass");
  return m;
}

int main(void) { 
  return n(); 
}
