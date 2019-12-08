#include<stdio.h>
/*
Count ei in text.
*/
int main(void)
{
    const char STOP = '#';
    int word_count = 0;
    char cur;
    char prev;

    printf("Enter text to count 'ei' (# to quit)\n");
    while ((cur = getchar()) != STOP)
    {
        if (cur == 'i' && prev == 'e')
        {
            word_count++;
        }
        
        prev = cur;
    }
    printf("\nDone.\n");
    printf("ei occurrences: %d\n", word_count);

    return 0;
}