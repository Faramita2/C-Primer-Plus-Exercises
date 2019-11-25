#include<stdio.h>
/*
Print reverse letters.
*/
int main(void)
{
    const int NUM = 6;
    char start = 'F';

    for (int i = 1; i <= NUM; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("%c", start - j);
        }
        printf("\n");
    }

    return 0;
}