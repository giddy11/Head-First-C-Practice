#include <stdio.h>
#include <stdlib.h>

/**
 * main - THis prints the required statements
 * Return: Returns 0
 */

int main(void)
{
	char card_name[3];
	int val = 0;

	puts("Enter the card_name: ");
	scanf("%2s", card_name);

	if (card_name[0] == 'K')
		val = 10;
	else if (card_name[0] == 'Q')
		val = 10;
	else if (card_name[0] == 'J')
		val = 10;
	else if (card_name[0] == 'A')
		val = 11;
	else
		val = atoi(card_name);

	printf("The card value is: %i\n", val);

	return (0);


}
