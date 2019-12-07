#include<stdio.h>
#include<strings.h>
/*
Input one line and print in reverse order.
*/
int main(void)
{
    char str[255];
    char ch;

    printf("Input one line: ");
    int i = 0;
    while (1 == scanf("%c", &ch) && ch != '\n') {
        str[i] = ch;
        i++;
    }

    printf("Reverse string: ");
    for (int i = strlen(str) - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\nDone!\n");

    return 0;
}