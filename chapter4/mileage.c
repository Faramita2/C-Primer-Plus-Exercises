#include<stdio.h>
#define KILOMETER_PER_MILE 1.609
#define GALLON_PER_LITER 3.785
int main(void)
{
	float mileage;
	float cost_gas;

	printf("Input your mileage and cost gas.\n");
	scanf("%f %f", &mileage, &cost_gas);
	float result = (cost_gas * GALLON_PER_LITER) / (mileage * KILOMETER_PER_MILE) ;
	printf("%.1f liter per 100 kilometers.\n", result * 100);

	return 0;
}
