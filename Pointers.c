#include <stdio.h>
#define SIZE 15

int fscan_frac(FILE *inp, int *nump, int *denomp);

int
main(void)
{
  int num_list[SIZE], den_list[SIZE], i;
  FILE *fracp;
  fracp = fopen("fracfile.txt", "r");

  for (i = 0; i < SIZE; ++i)
    fscan_frac(fracp, &num_list[i], &den_list[i]);
}

int
fscan_frac(FILE *inp, int *nump, int *denomp)
{
  char slash;
  int status;

  status = fscanf(inp, "%d %c%d", nump, &slash, denomp);

  if (status == 3 && slash == '/')
    status = 1;
  else if (status != EOF)
    status = 0;

  return (status);
}

/* (*) = indirection operator */
/* (.) = direct component selection operator */
/* (->) = indirect component selection operator */
/* (&) = address-of operator */
/* (*structp).component is equivalent to structp->component */
