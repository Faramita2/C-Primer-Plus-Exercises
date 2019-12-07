#include<stdio.h>
/*
* Print characters in pyramid format until user input character.
*/
int main()
{
    char end;

    printf("Input a charcter\n");
    scanf("%c", &end);

    for (char current = 'A'; current <= end; current++) {

        for (char startSpace = current; startSpace < end; startSpace++) {
            printf("%c", ' ');
        }

        for (char asc = 'A'; asc < current; asc++) {
            printf("%c", asc);
        }

        for (char desc = current; desc >= 'A'; desc--) {
            printf("%c", desc);
        }

        for (char endSpace = 'A'; endSpace < end; endSpace++) {
            printf("%c", ' ');
        }

        printf("%c", '\n');
    }

    return 0;
}