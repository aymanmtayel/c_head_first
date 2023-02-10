#include <stdio.h>
int main()
{
int decks;
puts("enter a number of decks");
scanf("%i",&decks);
if (decks <1) {
	puts("thats is not a valid numbers of decks");
	return 1;
}
printf("there are %i cards\n",(decks*52));
return 0;
}
