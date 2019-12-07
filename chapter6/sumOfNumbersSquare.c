#include<stdio.h>
/*
Calculate the sum of all integers from the upper limit to the lower limit.
*/
int main(void)
{
    int upper, lower;

    printf("Enter lower and upper integer limits: ");
    while (2 == scanf("%d %d", &lower, &upper) && (lower < upper)) {
        int sum = 0;
        for (int i = lower; i <= upper; i++) {
            sum += i * i;
        }
        printf("The sums of the squares from %d to %d is %d.\n", lower*lower, upper*upper, sum);
    }
    printf("Done!\n");

    return 0;
}