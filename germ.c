#include <stdio.h>

int main()
{
  int i;
  char Ingvaeonic[2][2][3][20] = {
    {
      { "Old English", "Middle English", "English" },
      { "Old Frisian", "Frisian" },
    },
      { "Old Saxon", "Middle Low German", "Low German" }
    };
  char Istvaeonic[2][3][15] = {
    { "Old Dutch", "Middle Dutch", "Dutch" },
    { "Afrikaans" } };
  char Erminonic[2][3][25] = {
    { "Old High German", "Middle High German", "German" },
    { "Old Yiddish", "Yiddish" } };
  
  printf("INGVAEONIC\n\n");
  for (i = 0; i < 3; i++)
    printf("%s\n", Ingvaeonic[0][0][i]);
  printf("\n");
  for (i = 0; i < 2; i++)
    printf("%s\n", Ingvaeonic[0][1][i]);
  printf("\n");
  for (i = 0; i < 3; i++)
    printf("%s\n", Ingvaeonic[1][0][i]);

  printf("\nISTVAEONIC\n\n");
  for (i = 0; i < 3; i++)
    printf("%s\n", Istvaeonic[0][i]);
  printf("\n%s\n", Istvaeonic[1][0]);

  printf("\nERMINONIC\n\n");
  for (i = 0; i < 3; i++)
    printf("%s\n", Erminonic[0][i]);
  printf("\n");
  for (i = 0; i < 2; i++)
    printf("%s\n", Erminonic[1][i]);

  return 0;
}