#include <stdio.h>
#include <unistd.h>
int main(void) {
  for (char i = 'A'; i <= 'Z'; i++) {
    write(1, &i, 1);
    write(1, &i, 1);
    write(1, &i, 1);
    write(1, &i, 1);
  }
  for (char i = 'a'; i <= 'z'; i++) {
    write(1, &i, 1);
    write(1, &i, 1);
    write(1, &i, 1);
    write(1, &i, 1);
  }
  write(1, "\n", 1);
}
