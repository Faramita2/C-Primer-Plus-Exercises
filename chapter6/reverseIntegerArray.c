#include<stdio.h>
/*
Read eight integers in an array and print them in reverse order.
*/
int main(void)
{
    const int SIZE = 8;
    int intArray[SIZE];

    printf("Input eight integers: ");
    for (int i = 0; i < SIZE; i++) {
        scanf("%d", &intArray[i]);
    }

    printf("Print them in reverse order: ");
    for (int i = SIZE - 1; i >= 0; i--) {
        printf("%d ", intArray[i]);
    }

    return 0;
}