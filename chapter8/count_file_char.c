#include<stdio.h>
#include<stdlib.h>
/*
Count input file characters number and print it.
*/
int main(void)
{
    char ch;
    int ct = 0;
    char file_name[50];
    FILE * fp;

    printf("Input your file name:\n");
    scanf("%s", file_name);
    fp = fopen(file_name, "r");
    if (fp == NULL)
    {
        printf("Your file is not exist.");
        exit(1);
    }
    
    while (getc(fp) != EOF)
        ct++;
    
    printf("Your file '%s' has %d characters.", file_name, ct);

    return 0;
}