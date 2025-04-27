#include <cstdlib>
#include <cstring>
#include <iostream>

class N {
public:
  // vtable
  char str[100];
  int nb;

  N(int number) : nb(number) {}
  ~N() {}

  void *setAnnotation(char *annotation) {
    size_t n;
    n = strlen(annotation);
    return memcpy(this->str, annotation, n);
  }

  virtual int operator+(N &lhs) { return nb + lhs.nb; }
  int operator-(N &lhs) { return nb - lhs.nb; }
};

int main(int ac, char **av) {
  N *a;
  N *b;

  if (ac <= 1)
    exit(1);

  a = new N(5);
  b = new N(6);

  a->setAnnotation(av[1]);
  return (*a + *b);
}
