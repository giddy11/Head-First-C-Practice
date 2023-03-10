#include <stdio.h>

int main()
{
	char ex[20];/* Assume name shorter than 20 chars. */
	puts("Enter boyfriend's name: ");
	scanf("%19s", ex);

	printf("Dear %s.\n\n\tYou're history.\n", ex);

	return (0);
}
