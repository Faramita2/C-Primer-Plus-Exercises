#include<stdio.h>
/*
 * Transform my age to days.(ignore leap year)
 */
int main(void)
{
	int myAge = 24;
	int ageDays;
	ageDays = myAge * 365;

	printf("I am %d years old and it's been %d days since I was born.\n", myAge, ageDays);

	return 0;
}
