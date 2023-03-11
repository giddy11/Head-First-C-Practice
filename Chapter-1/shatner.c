#include <stdio.h>

int main() 
{
	char s[10] = {'s', 'h', 'a', 't', 'n', 'e', 'r'};
	s[0] = 'S';
	//s[7] = 'p';
	s[8] = 'l';
	//printf("%s", s);

	for (int i = 0; i < sizeof(s); i++)
		printf("%i: %c\n", i, s[i]);

	char * foo = "spoon";
	//foo[0] = 'd';
	printf("%c", (foo[2]));
}
