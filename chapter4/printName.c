#include<stdio.h>
/*
 * Input first name and last name, then output "first name, last name"
 */
int main(void)
{
	char first_name[20];
	char last_name[20];

	printf("Please input your first name and last name.\n");
	scanf("%s %s", first_name, last_name);

	printf("Your name is %s,%s.\n", first_name, last_name);
	
	return 0;
}
