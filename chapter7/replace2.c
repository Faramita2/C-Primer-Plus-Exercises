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
        switch (ch)
        {
        case '.':
            putchar('!');
            replace_count++;
            break;
        case '!':
            printf("!!");
            replace_count++;
            break;
        default:
            putchar(ch);
            break;
        }
    }
    printf("Done.\n");
    printf("Replace count: %d\n", replace_count);

    return 0;
}