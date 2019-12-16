#include<stdio.h>
int main(void)
{
    char ch;
    int ct = 0;

    while ((ch = getchar()) != EOF)
    {
        ct++;
        
        if (ct % 10 == 0)
            putchar('\n');

        if (ch < 32) {
            switch (ch) {
                case '\n': printf("\\n");
                           break;
                case '\t': printf("\\t");
                           break;
                default:  printf("^%c", ch + 64);
            }

            continue;
        }

        putchar(ch);
    }
    
    return 0;
}