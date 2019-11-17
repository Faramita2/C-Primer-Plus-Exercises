#include<stdio.h>
/*
 * Input a f temperature, print k and s temperatrue.
 */
int main(void)
{
	const float RESOLUTE_ZERO = 273.16f;
	const float RATIO = 5.0f / 9.0f;
	const float S_CONST = 32.0f;

	float f_temp;
	float c_temp;
	float k_temp;

	printf("Enter a f temperature: \n");
	int input = scanf("%f", &f_temp);
	while (input == 1) {
		c_temp = RATIO * (f_temp - S_CONST);
		k_temp = c_temp + RESOLUTE_ZERO;
		printf("%.1f℉ is %.1fC, %.fK.\n", f_temp, c_temp, k_temp);

		printf("Enter a f temperature (q or other characters to quit): \n");
		input = scanf("%f", &f_temp);
	}
	
	return 0;
}

