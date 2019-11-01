#include<stdio.h>
/*
 * Observe how the system handles integer/float-point number overflows.
 */
int main(void)
{
	long max_short = 65537;
	float toobig = 3.4E38 * 100.0f;
	float toosmall = 0.1234E-38;

	printf("Unsigned short max number is %hd, and it adds 1 is %hd. It takes up %zd bytes.\n", max_short, max_short + 1, sizeof(short));

	printf("toobig is %e.\n", toobig);
	printf("toosmall is %e, toosmall divide 10 is %e.\n", toosmall, toosmall / 10000000.0f);

	return 0;
}
