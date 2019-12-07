#include<stdio.h>
/*
Input two floating-point numbers and print the difference between the two
numbers divides by the product of the two numbers.
*/
int main(void)
{
    float first_flo, second_flo;
    float result;

    printf("Input two floating-point numbers.\n");
    while(2 == scanf("%f %f", &first_flo, &second_flo)) {
        result = (first_flo - second_flo) / (first_flo * second_flo);
        printf("(%f - %f) / (%f * %f) = %f\n", first_flo, second_flo, first_flo, second_flo, result);
        printf("Input two floating-point numbers.\n");
    }
    printf("It's done!");
    
    return 0;
}