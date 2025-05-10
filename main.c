#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(int argc, char **argv)
{
	int (*convf)(int); /* function pointer declaration */
	if(strcmp(argv[0], "./upper") == 0)
		convf = toupper;
	else if(strcmp(argv[0], "./lower") == 0)
		convf = tolower;
	else
	{
		printf("\nHas to be \"upper\" or \"lower\"\n");
		return 1;
	}

	int c;
	while((c = getchar()) != EOF)
		putchar((*convf)(c));
	return 0;
}
