#include <stdio.h>

/* copy input to output */

main(void)
{
  int c;

  c = getchar();
  printf("char: %d, EOF comparison: %d, EOF value: %d", c, (c != EOF), EOF);
}
