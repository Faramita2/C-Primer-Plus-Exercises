#include<stdio.h>
/*
Replace period with exclamation mark.
*/
int main(void)
{
    const char STOP = '#';
    int replace_count = 0;
    char ch;

    printf("Enter text to be replaced (# to quit)\n");
    while ((ch = getchar()) != STOP)
    {
        if (ch == '.')
        {
            putchar('!');
            replace_count++;
            continue;
        }
        else if (ch == '!')
        {
            printf("!!");
            replace_count++;
            continue;
        }
        putchar(ch);
    }
    printf("\nDone.\n");
    printf("Replace count: %d\n", replace_count);

    return 0;
}