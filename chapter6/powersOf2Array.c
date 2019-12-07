#include<stdio.h>
/*
An array for first 8 powers of 2.
*/
int main(void)
{
    const int SIZE = 8;
    int powersOf2[SIZE];

    for (int i = 0; i < SIZE; i++) {
        int power = 1;
        for (int j = 1; j <= i + 1; j++) {
            power *= 2;
        }
        powersOf2[i] = power;
    }

    printf("The array for first 8 powers of 2: ");
    int i = 0;
    do {
        printf("%d ", powersOf2[i]);
    } while (++i < SIZE);
    printf("\n");

    return 0;
}