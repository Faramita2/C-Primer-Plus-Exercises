#include<stdio.h>
/*
Calculate simple and compound interest.
*/
int main(void)
{
    const float simple = 0.1;
    const float compound = 0.05;
    float simpleInterest = 100;
    float compoundInterest = 100;

    int year = 1;
    while (compoundInterest <= simpleInterest) {
        simpleInterest += simple * 100.0;
        compoundInterest *= (1.0 + compound);
        printf("Current simple: %f, compound: %f\n", simpleInterest, compoundInterest);
        year++;
    }
    printf("Year: %d, Simple interest: %f, Compound interest: %f.\n", year, simpleInterest, compoundInterest);

    return 0;
}