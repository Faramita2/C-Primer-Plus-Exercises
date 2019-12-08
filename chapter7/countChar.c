#include<stdio.h>
#include<ctype.h>
/*
Count input characters until #.
*/
int main(void)
{
    const char STOP = '#';
    int space_c = 0;
    int line_c = 0;
    int other_c = 0;
    char ch;

    while ((ch = getchar()) != STOP) {
        if (ch == '\n')
        {
            line_c++;
        }
        else if (isspace(ch))
        {
            space_c++;
        }
        else 
            other_c++;
    }
    printf("Input characters spaces: %d, line: %d, others: %d.\n", space_c, line_c, other_c);

    return 0;
}