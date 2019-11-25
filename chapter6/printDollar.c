#include<stdio.h>
/*
Print $ in specific format.
*/
int main(void)
{
    const int NUM = 5;

    for (int i = 1; i <= NUM; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("$");
        }
        printf("\n");
    }
    return 0;
}