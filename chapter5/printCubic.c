#include<stdio.h>
/*
 * Print cubic number from user input.
 */
double cubicNum(double num);
int main(void)
{
	double n;
	
	printf("Enter a number: \n");
	
	scanf("%lf", &n);
	printf("%lf cube is %lf.\n", n, cubicNum(n));

	return 0;
}

double cubicNum(double num)
{
	return num * num * num;
}
