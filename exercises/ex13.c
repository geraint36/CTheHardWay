#include <stdio.h>
#include <ctype.h>

char *toLowerCase(char *input)
{
	int size = sizeof(input) / sizeof(char);

	int i;
	for (i=0; i<size; i++) {
		input[i] = tolower(input[i]);
	}

	return input;
}

int main(int argc, char *argv[])
{
	if(argc != 2) {
		printf("ERROR: You need one argument.\n");
		// this is how you abort a program
		return 1;
	}

	// converted to lowercae so switch case is clearer
	argv[1] = toLowerCase(argv[1]);

	int i = 0;
	for(i = 0; argv[1][i] != '\0'; i++) {
		char letter = argv[1][i];

		switch(letter) {
		case 'a':
			printf("%d: 'A'\n", i);
			break;

		case 'e':
			printf("%d: 'E'\n", i);
			break;

		case 'i':
			printf("%d: 'I'\n", i);
			break;

		case 'o':
			printf("%d: 'O'\n", i);
			break;

		case 'u':
			printf("%d: 'U'\n", i);
			break;

		case 'y':
			if(i > 2) {
				// it's only sometimes Y
				printf("%d: 'Y'\n", i);
				break;
			}

		default:
			printf("%d: %c is not a vowel\n", i, letter);
		}
	}

	return 0;
}