#include<stdio.h>
/*
 * Enter a number, then print all number bigger it until bigger to 10.
 */
int main(void)
{
	const int MAX_BIGGER = 10;
	int n;

	printf("Enter a number.\n");
	scanf("%d", &n);

	int i = 0;
	while (i++ < 10) {
		printf("%d\t", n+i);
	}
	printf("\n");

	return 0;
}

	

