#define _GNU_SOURCE

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main(int ac, char **av) {
  int nb = atoi(av[1]);
  if (nb == 423) { // 423 = 0x1a7
    char *str = strdup("/bin/sh");
    gid_t gid = getegid(); // return effective UID (level1)
    uid_t uid = geteuid(); // return effective GID (users)

    setresgid(gid, gid,
              gid); // set real, effective, saved, GID to users (level1 groups)
    setresuid(uid, uid, uid); // set real, effective, saved, UID to level1
    char *args[] = {str, NULL};
    execv(str, args);
  } else {
    fwrite("No !\n", 1, 5, stderr);
  }
  return 0;
}
