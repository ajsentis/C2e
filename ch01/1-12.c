#include <stdio.h>

main(void)
{
  int c, prevC;
  prevC = '\0';
    
  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\t' || c == '\n') {
      if (prevC != ' ' && prevC != '\t' && prevC != '\n') {
        putchar('\n');
      }
    }
    else {
      putchar(c);
    }
    prevC = c;
  }
}
