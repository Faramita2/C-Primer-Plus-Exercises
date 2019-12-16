#include<stdio.h>
#include<ctype.h>
int main(void)
{
    char ch;
    int lower = 0;
    int upper = 0;

    while ((ch = getchar()) != EOF)
    {
        if (isupper(ch))
            upper++;
        if (islower(ch))
            lower++;
    }

    printf("Lower has %d, upper has %d.\n", lower, upper);
    
    return 0;
}