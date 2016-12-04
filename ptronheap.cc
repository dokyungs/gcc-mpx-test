#include <stdio.h>

struct ptr_container {
  int *ptr;
};

typedef struct ptr_container pointer;

const char *fmt = "%d\n";

int main() {
  int a = 7;
  int b = 15;
  pointer *p = new pointer;
  p[0].ptr = &a;
  printf(fmt, *p[0].ptr);
  p[0].ptr = &b;
  printf(fmt, *p[0].ptr);
}
