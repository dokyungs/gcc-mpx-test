#include <stdio.h>

int main() {
  int a[3] = {1, 2, 3};
  int *pA = a;
  pA += 1;

  printf("%d\n", *pA);
}
