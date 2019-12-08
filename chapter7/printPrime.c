#include <stdio.h>
#include <stdbool.h>
/*
Input a number, then print the prime lower than it;
*/
bool isPrime(int n);
int main(void)
{
    int num;

    while (printf("Enter a number: "), 1 == scanf("%d", &num) && num > 0)
    {
        for (int i = 1; i < num; i++)
        {
            if (isPrime(i))
                printf("%d ", i);
        }
        printf("\n");
    }
    printf("Done!\n");

    return 0;
}

bool isPrime(int n) {
    if (n == 1)
        return false;

    bool isPrime = true;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            isPrime = false;
            break;
        }
    }

    return isPrime;
}