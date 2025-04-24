int main(int ac, char **av) {
  int *var1 = (int **)malloc(16);
  var1[0] = 1;

  char *var2 = malloc(16);
  var1[1] = var2;
}
