#include <stdio.h>

static void __attribute__ ((noinline)) testArgs( int *p ) {
  printf("%d\n", *(p+3));
}

int main() {
  int a[5] = {1,3,7,15,31};
  testArgs( a );
}
