#include <stdio.h>

typedef enum { false, true } bool;

int main()
{
  bool disaster = false;
  int i, j;

  for (i = 0; i < 100; i++) {
    for (j = 0; j < 100; j++) {
      if ((i + j) >= 150)
        disaster = true;
      if (disaster)
        goto error;
    }
  }

  error:
  printf("Error occurred at i = %d and j = %d.\n", i, j);

  return 0;
}