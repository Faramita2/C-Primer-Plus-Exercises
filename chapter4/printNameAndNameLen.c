#include<stdio.h>
#include<strings.h>
/*
 * Input user's first name and last name then print them with their length.
 */
int main(void)
{
	char first_name[20];
	char last_name[20];

	printf("What's your first name?\n");
	scanf("%s", first_name);
	int first_name_len = (int)strlen(first_name);
	

	printf("What's your last name?\n");
	scanf("%s", last_name);
	int last_name_len = (int)strlen(last_name);

	printf("%*s %*s\n", first_name_len, first_name, last_name_len, last_name);
	printf("%*d %*d\n", first_name_len, first_name_len, last_name_len, last_name_len);

	printf("%*s %*s\n", first_name_len, first_name, last_name_len, last_name);
	printf("%-*d %-*d\n", first_name_len, first_name_len, last_name_len, last_name_len);

	return 0;
}

