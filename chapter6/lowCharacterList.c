#include<stdio.h>
#define SIZE 26
/*
Create an array with all 26 letters.
*/
int main(void)
{
    char all_chars[SIZE];
    char ini = 'A';

    for (int i = 0;  i < SIZE; ++i)
    {
        all_chars[i] = ini + i;
    }

    for (int i = 0; i < SIZE; ++i) 
    {
        printf("%5c", all_chars[i]);
    }

    return 0;
}