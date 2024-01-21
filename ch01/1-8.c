#include <stdio.h>

main(void)
{
  int c, blanks, tabs, nl;
  blanks = 0;
  tabs = 0;
  nl = 0;
  
  while ((c = getchar()) != EOF) {
    if (c == ' ')
      ++blanks;
    if (c == '\t')
      ++tabs;
    if (c == '\n')
      ++nl;
  }
  printf("blanks: %3d, tabs: %3d, newlines: %3d\n", blanks, tabs, nl);
}
