  #include <stdlib.h>
  #include <stdio.h>
  #include <string.h>
  
  int main()
  {
	int i;
	char bonnie[4][25] = { "English", "Irish/Scottish", "German", "Norwegian" };
	char kevin[5][25] = { "Dutch/German", "English", "Norwegian/Swedish", "EE/Russian", "Jewish" };
	char ryan[4][25] = { "English", "Dutch/German", "Irish/Scottish", "Norwegian/Swedish" };
	char kara[5][25] = { "English", "Dutch/German", "Irish/Scottish", "Norwegian", "Jewish" };
	char jen[6][25] = { "English", "Lithuanian/Baltic", "EE/Russian", "Norwegian/Swedish", "German", "Irish/Scottish" };
	char bentley[5][25] = { "English", "German", "Irish/Scottish", "Baltic", "Norwegian" };
	char drew[2][20] = { "Irish/Scottish", "English" };
	
	/* Mom */
	size_t bplength = sizeof bonnie / sizeof bonnie[0];
	printf("BONNIE\n");
	for (i = 0; i < bplength; i++)
		printf("%d %s\n", i+1, bonnie[i]);
	printf("\n");
	
	/* Dad */
	size_t kklength = sizeof kevin / sizeof kevin[0];
	printf("KEVIN\n");
	for (i = 0; i < kklength; i++)
		printf("%d %s\n", i+1, kevin[i]);
	printf("\n");

	/* Me */
	size_t rklength = sizeof ryan / sizeof ryan[0];
	printf("RYAN\n");
	for (i = 0; i < rklength; i++)
		printf("%d %s\n", i+1, ryan[i]);
	printf("\n");

	/* Kara */
	size_t khlength = sizeof kara / sizeof kara[0];
	printf("KARA\n");
	for (i = 0; i < khlength; i++)
		printf("%d %s\n", i+1, kara[i]);
	printf("\n");

	/* Jen */
	size_t jtlength = sizeof jen / sizeof jen[0];
	printf("JENNIFER\n");
	for (i = 0; i < jtlength; i++)
		printf("%d %s\n", i+1, jen[i]);
	printf("\n");

	/* Bentley */
	size_t bllength = sizeof bentley / sizeof bentley[0];
	printf("BENTLEY\n");
	for (i = 0; i < bllength; i++)
		printf("%d %s\n", i+1, bentley[i]);
	printf("\n");
	
	/* Drew */
	size_t dplength = sizeof drew / sizeof drew[0];
	printf("DREW\n");
	for (i = 0; i < dplength; i++)
		printf("%d %s\n", i+1, drew[i]);
	printf("\n");
		
	return 0;
  }