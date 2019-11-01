#include<stdio.h>
/*
 * Read a float-point number, then print it.
 */
int main(void)
{
	float flo;

	printf("Enter a floating-point value: ");
	scanf("%f", &flo);

	printf("fixed-point notation: %.6f\n", flo);
	printf("exponential notation: %.6e\n", flo);
	printf("p notation: %a\n", flo);

	return 0;
}

