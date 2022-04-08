
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(int argc, char** argv)
{
	char* usage = "Usage: ext <file>\n  Return the extension of a file.\n  ext hello_world.py -> py\n";
	if(argc < 2) // If no arguments are given print the usage.
	{
		printf("%s", usage);
		return 0;
	}

	/*bool hasExtension = false;
	for(int i = 0; i < strlen(argv[1]); i++){
		if(argv[1][i] == '.'){
			hasExtension = true;
		}
	}*/

	/* https://www.codingame.com/playgrounds/14213/how-to-play-with-strings-in-c/string-split */
	char* str[256];
	strcpy(str, argv[1]);

	int init_size = strlen(str);
	char delim[] = ".";

	char *ptr = strtok(str, delim);
	char* last;

	while(ptr != NULL)
	{
		last = ptr;
		// printf("'%s'\n", ptr);
		ptr = strtok(NULL, delim);
	}
	// printf("%s\n", str[1]);

	/* */

	printf("%s\n", last);


	return 0;
}

