#include<stdio.h>
/*
 * Input a float-point number then print it in two ways.
 */
int main(void)
{
	float in_float;

	scanf("%f", &in_float);
	printf("The input is %.1f or %.1e.\n", in_float, in_float);
	printf("The input is %+.3f or %+.3E.\n", in_float, in_float);

	return 0;
}
