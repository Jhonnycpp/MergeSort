#include <stdlib.h>
#include <stdio.h>
#include "mergesort.h"
#define NELEMS(x)  (sizeof(x) / sizeof((x)[0]))

// https://gist.github.com/olegon/27c2a880c9b932862e60ab5eb89be5b6

int main (void) {
  int v[8] = { -1, 7, -3, 11, 4, -2, 4, 8 };

  ms(v, NELEMS(v));

  for (int i = 0; i < NELEMS(v); i++) {
    printf("%d ", v[i]);
  }

  putchar('\n');

  return 0;
}
