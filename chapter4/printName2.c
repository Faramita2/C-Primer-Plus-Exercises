#include<stdio.h>
#include<strings.h>
/*
 * Input name then print it in different way.
 */
int main(void)
{
	char name[20];
	
	printf("What's your name?\n");
	scanf("%s", name);

	printf("\"%s\" is your name.\n", name);
	printf("\"%20s\" is your name.\n", name);
	printf("\"%-20s\" is your name.\n", name);
	printf("%*s is your name.\n", (int)strlen(name) + 3, name);

	return 0;
}
