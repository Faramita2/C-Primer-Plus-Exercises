#include<stdio.h>
int main(void)
{
	int n;
	float flo1;
	float flo2;
	char name[10];
	char str[10];
	int num;
	char ig_str[10];
	int number;

	printf("Input a number.\n");
	scanf("%d", &n);
	printf("This number is %d.\n", n);

	printf("Input two float point numbers.\n");
	scanf("%f %f", &flo1, &flo2);
	printf("These float point numbers are %.2f %.2E.\n", flo1, flo2);

	printf("Input a string.\n");
	scanf("%s", name);
	printf("This string is \"%s\".\n", name);

	printf("Input a string and a integer.\n");
	scanf("%s %d", str, &num);
	printf("This string is \"%s\", and this integer is %d.\n", str, num);

	printf("Input an ignored string and a integer.\n");
	scanf("%*s %d", &number);
	printf("This number is %d.\n", number);

	return 0;
}
