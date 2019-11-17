#include<stdio.h>
/*
 * Cm to inches.
 */
int main(void)
{
	const float CM_PER_FEET = 30.48;
	const float CM_PER_INCH = 2.54;
	float height;

	printf("How many cms are you tall?\n");
	scanf("%f", &height);

	while (height > 0) {
		int feets = height / CM_PER_FEET;
		float inches = (height - (feets * CM_PER_FEET)) / CM_PER_INCH;
		printf("%.1f cm = %d feet, %.1f inches\n", height, feets, inches);
		printf("How many cms are you tall?(<= 0 to quit)\n");
		scanf("%f", &height);
	}
	printf("Its done!");

	return 0;
}
		
