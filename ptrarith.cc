#include <stdio.h>

int main() {
  int a[] = {1,3,7,15,31};
  int* pA = a;
  int** ppA = &pA;

  printf("%d\n", **ppA);
  printf("%lx\n", (unsigned long)*ppA);

  *ppA += 1;
  printf("%d\n", **ppA);
  printf("%lx\n", (unsigned long)*ppA);
}
