#include<stdio.h>
#include<strings.h>
/*
Input a string then print it in reverse order.
*/
int main(void)
{
    char str[100];

    printf("Input a string.\n");
    scanf("%s", str);

    for (int len = strlen(str); len >= 0; len--) {
        printf("%c", str[len]);
    }

    return 0;
}