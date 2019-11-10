#include<stdio.h>
/*
 * Input user's name and height in inch then print them.
 */
int main(void)
{
	char name[20];
	float height;

	printf("What's your name?\n");
	scanf("%s", name);
	
	printf("How many inches are you tall?\n");
	scanf("%f", &height);

	printf("%s, you are %.3f feet tall.\n", name, height);

	return 0;
}
