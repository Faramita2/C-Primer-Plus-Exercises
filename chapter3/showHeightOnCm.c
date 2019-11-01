#include<stdio.h>
/*
 * Input inch height, output cm height.
 */
int main(void)
{
	float cm_per_inch = 2.54f;
	float height;

	printf("How many inches are you tall: ");
	scanf("%f", &height);
	printf("Your %f-inch height is %f cm.\n", height, height * cm_per_inch);

	return 0;
}
