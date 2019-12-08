#include<stdio.h>
#include<ctype.h>
#define SPACE ' '
int main(void)
{
    char ch;

    ch = getchar();
    while (ch != '\n')
    {
        if (isalpha(ch))
            putchar(ch + 1);
        else 
            putchar(ch);
        ch = getchar();
    }
    putchar(ch);

    return 0;
}