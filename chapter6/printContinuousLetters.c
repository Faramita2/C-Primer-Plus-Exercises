#include<stdio.h>
/*
Print continuous letters.
*/
int main(void)
{
    const int NUM = 6;
    char start = 'A';

    for (int i = 1; i <= NUM; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("%c", start++);
        }
        printf("\n");
    }

    return 0;
}