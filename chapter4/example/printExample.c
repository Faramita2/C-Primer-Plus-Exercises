#include<stdio.h>
#include<strings.h>
#define Q "His Hamlet was funny without being vulgar."
int main(void)
{
	printf("He sold the painting for $%2.2f.\n", 2.345e2); // 234.50
	printf("%c%c%c\n", 'H', 105, '\41'); // Hi!
	printf("%s\nhas %d characters.\n", Q, strlen(Q)); // "His..." length
	printf("\"%s\"\nhas %d characters.\n", Q, strlen(Q)); // "His..." length
	printf("Is %2.3e the same as %2.2f\n", 1201.0, 1201.0); // 1.201e+03 1201.00

	return 0;
}
