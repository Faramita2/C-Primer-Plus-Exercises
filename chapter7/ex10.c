#include<stdio.h>
int main(void)
{
    char ch;

    while ((ch = getchar()) != '#')
    {
        if (ch != '\n') {
            printf("Step 1\n");
            if (ch != 'c')
            {  
                if (ch == 'b')
                    break;
                else if (ch == 'h')
                    goto laststep;
                printf("Step 2\n");
                laststep: printf("Step 3\n");
            }
        }
    }
    printf("Done\n");

    return 0;    
}