#include <stdio.h>
#include <stdlib.h>

int main()
{
  int c, p;
  printf("Enter a damn character: ");
  c = getchar();
  if (c >= 'a' && c <= 'z')
  {
    p = putchar(c);
    printf("\nGood %cuck!\n", p);
  }
  else
    printf("\nSorry, that just won't work.\nGoodbye.\n");
  system("pause");
  return 0;
}