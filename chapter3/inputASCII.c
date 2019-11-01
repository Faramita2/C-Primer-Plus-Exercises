#include<stdio.h>
/*
 * Input ASCII and output character.
 */
int main(void)
{
	int ch;
	printf("Please input an ASCII code:");
	printf(" __\b\b");
	scanf("%d", &ch);
	printf("\t\tYour input ASCII code is %c.", ch);
	printf("\rMy god!\n");
	

	return 0;
}
