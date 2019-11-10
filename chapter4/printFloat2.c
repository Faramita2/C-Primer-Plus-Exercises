#include<stdio.h>
#include<float.h>
/*
 * Print float-point number.
 */
int main(void)
{
	double d_var = 1.0/3.0;
	float f_var = 1.0/3.0;

	printf("Double variable d_var: %.6f %.12f %.16f.\n", d_var, d_var, d_var);
	printf("Float variable f_var: %.6f %.12f %.16f.\n", f_var, f_var, f_var);
	printf("FLT_DIG: %.6f %.12f %.16f.\n", FLT_DIG, FLT_DIG, FLT_DIG);
	printf("DBL_DIG: %.6f %.12f %.16f.\n", DBL_DIG, DBL_DIG, DBL_DIG);

	return 0;
}
