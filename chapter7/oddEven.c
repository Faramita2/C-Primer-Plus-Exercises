#include<stdio.h>
/*
Records even numbers, odd numbers entered by user, and their respective averages.
*/
int main(void)
{
    int odd_count = 0;
    int even_count = 0;
    float odd_sum = 0.0;
    float even_sum = 0.0;
    int num;

    printf("Enter a number to be analyzed (q or 0 to quit)\n");
    while (1 == scanf("%d", &num) && num != 0)
    {
        if (num % 2 == 0)
        {
            even_count++;
            even_sum += num;
        } 
        else {
            odd_count++;
            odd_sum += num;
        }
    }
    printf("Done.\n");
    printf("Odd number has %d, their average is %.1f.\n", odd_count, odd_sum / odd_count);
    printf("Even number has %d, their average is %.1f.\n", even_count, even_sum / even_count);

    return 0;
}