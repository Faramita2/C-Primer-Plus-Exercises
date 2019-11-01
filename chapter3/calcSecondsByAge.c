#include<stdio.h>
/*
 * Get the age of the user, calculate the number of seconds. 
 */
int main(void)
{
	float seconds_for_a_year = 3.156e7f;
	short age;

	printf("How old are you: ");
	scanf("%hd", &age);

	printf("You are %hd years old and it has %e seconds.\n", age, seconds_for_a_year * age);

	return 0;
}
