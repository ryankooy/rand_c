#include <stdlib.h>

typedef struct MijnKlas {
  int variabel;
} *MijnKlas;

MijnKlas MijnKlas_nieuw()
{
  MijnKlas pdit = malloc(sizeof *pdit);
  pdit->variabel = 0;
  return pdit;
}

void MijnKlas_verwijderen(MijnKlas *pdit)
{
  if (pdit) {
    free(*pdit);
    *pdit = NULL;
  }
}

void MijnKlas_eenMethode(MijnKlas pdit)
{
  pdit->variabel = 1;
}

int main()
{
  MijnKlas voorwerp = MijnKlas_nieuw();
  MijnKlas_eenMethode(voorwerp);
  MijnKlas_verwijderen(&voorwerp);
  return 0;
}