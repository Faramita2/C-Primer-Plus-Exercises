#include<stdio.h>
int main(void)
{
    int n = 3;

    while (n)
    {
        printf("%2d is true\n", n--);
    }
    printf("%2d is false\n", n);

    n = -3;
    while (n)
    {
        printf("%2d is true\n", n++);
    }

    return 0;
}