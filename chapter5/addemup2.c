#include<stdio.h>
int main(void)
{
	int count, sum;
	int days;

	printf("How many days you worked?\n");
	scanf("%d", &days);
	count = 0;
	sum = 0;
	while (count++ < days) {
		sum = sum + count * count;
	}
	printf("sum = %d\n", sum);

	return 0;
}
	

