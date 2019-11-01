#include<stdio.h>
/*
 * Various sizes.
 */
int main(void)
{
	float pints_per_cup = 0.5f;
	int ounces_per_cup = 8;
	int spoons_per_ounce = 2;
	int tea_spoons_per_spoon = 3;

	int cup;
	printf("How many cups: ");
	scanf("%d", &cup);

	printf("%d cup(s) have(s) %f pint(s).\n", cup, cup * pints_per_cup);
	printf("%d cup(s) have(s) %d ounce(s).\n", cup, cup * ounces_per_cup);
	printf("%d cup(s) have(s) %d spoon(s).\n", cup, cup * ounces_per_cup * spoons_per_ounce);
	printf("%d cup(s) have(s) %d tea spoon(s).\n", cup, cup * ounces_per_cup * spoons_per_ounce * tea_spoons_per_spoon);

	return 0;
}
	
