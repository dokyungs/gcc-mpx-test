#include <stdio.h>

static int a[3] = {1, 3, 7};

static int * __attribute__ ((noinline)) testRet() {
  return a;
}

int main() {
  int *p = testRet()+2;
  int **pp = &p; // stack address space
  printf("%lx\n", (unsigned long)pp);
  printf("%lx\n", (unsigned long)*pp);
  printf("%d\n", (int)**pp);
}
