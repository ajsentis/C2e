#include <stdio.h>

main(void)
{
  int c, prevC;
  prevC = '\0';
  
  while ((c = getchar()) != EOF) 
  {
    if ((c != ' ') || (prevC != ' ')) {
      putchar(c);
    }
    prevC = c;
  } 
}
