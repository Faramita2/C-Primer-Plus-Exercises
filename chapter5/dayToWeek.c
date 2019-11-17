#include<stdio.h>
/*
 * Enter days to weeks and days.
 */
int main(void)
{
	int days;
	const int DAY_PER_WEEK = 7;

	printf("Enter days.(smaller 0 to quit)\n");
	scanf("%d", &days);
	while (days > 0) {
		printf("%d day(s) are %d weeks, %d days.\n", days, days/DAY_PER_WEEK, days%DAY_PER_WEEK);
		printf("Enter days(smaller 0 to quit).\n");
		scanf("%d", &days);
	}
	printf("Its done!\n");
	
	return 0;
}
