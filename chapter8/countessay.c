#include<stdio.h>
#include<stdlib.h>
/*
Count essay characters number then save in essayct file.
*/
int main(void)
{
    char ch;
    int ct = 0;
    FILE * fp;

    fp = fopen("essay", "r");
    while (getc(fp) != EOF)
        ct++;
    
    printf("%d", ct);

    return 0;
}