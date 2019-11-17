#include<stdio.h>
#define MIN_PER_HOUR 60
/*
 * Enter number of minutes, calculate to hours and minutes.
 */
int main(void)
{
	int mins;

	printf("Enter your minutes(0 to quit)\n");
	scanf("%d", &mins);

	while (mins > 0) {
		printf("%d minutes has %d hour(s) and %d minute(s).\n", mins, mins/MIN_PER_HOUR, mins%MIN_PER_HOUR);
		printf("Enter your minutes(0 to quit)\n");
		scanf("%d", &mins);
	}
	printf("Its done!\n");

	return 0;
}
