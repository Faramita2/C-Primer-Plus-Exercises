#include<stdio.h>
#include<strings.h>
#define SIZE 8
/*
2 double array, one for user'input, another one for sum before one.
*/
void printArray(double array[]);
int main(void)
{
    double array1[SIZE], array2[SIZE];
    double sum = 0;

    printf("Input 8 numbers for first array: ");
    for (int i = 0; i < SIZE; i++) {
        scanf("%lf", &array1[i]);
        sum += array1[i];
        array2[i] = sum;
    }

    printArray(array1);
    printArray(array2);
    
    return 0;
}

void printArray(double array[]) {
    for (int i = 0; i < SIZE; i++) {
        printf("%lf ", array[i]);
    }
    printf("\n");
}