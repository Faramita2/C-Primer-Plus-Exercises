#include<stdio.h>
#define str "I'm a string."
int main(void)
{
	int num = 888;
	float flo = 234.567f;
	unsigned long un_num = 3000000000;

	printf("This is your number: *%d*.\n", num);

	printf("This is your hexdecimal number: *%4x*.\n", num);

	printf("This is your float-point number: *%10.3f*.\n", flo);
	printf("And it's *%12.2e.*\n", flo);

	printf("This is a example string:\n\
*%-30s*.\n", str);

	printf("This is an unsigned long integer with 15 width: *%15lu*.\n", un_num);

	printf("This is your hexdecimal number: *%#4x*.\n", num);

	printf("This is your float-point number: *%-12.2e*.\n", flo);
	
	printf("This is your float-point number: *%+10.3f*.\n", flo);

	printf("This is your string: *%8.8s*.\n", str);

	printf("A decimal has 6 width and at least 4 numbers: *%6.4d*.\n", num);

	printf("How do you like below octaldecimal width?\n");

	int width;
	scanf("%d", &width);
	printf("This is your octaldecimal: *%*o*.\n", width, num);

	printf("My favorite character is *%2c*.\n", 'Z');

	printf("The float point width equals to its characters number: *%+.f*.\n", 3.13f); // todo 

	printf("A string with 7 width, left align and only first 5 characters: *%7.5s*.\n", str);

	return 0;
}

