#include<stdio.h>
#include<ctype.h>
/*
Print the ASCII code of the entered characters in eight per line.
*/
int main(void)
{
    const char STOP = '#';
    int c_count = 0;
    char ch;

    while ((ch = getchar()) != STOP) {
        if (ch == '\n')
        {
            continue;
        }
        
        c_count++;
        printf("%d ", ch);
        if (c_count % 8 == 0)
        {
            printf("\n");
        }
        
    }
    printf("\nDone.\n");

    return 0;
}