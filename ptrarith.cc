#include <stdio.h>

int main() {
  int a = 1;
  int* pA = &a;
  int** ppA = &pA;

  printf("%d\n", **ppA);

  //*ppA += 7;
}
