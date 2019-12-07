#include<stdio.h>
/*
Enter the upper and lower limits of the form and print the numbers in 
that range and their squares and cubes.
*/
int main(void)
{
    int min, max;
    
    printf("Enter the lower and upper limits of the form.\n");
    scanf("%d %d", &min, &max);

    printf("%s %20s %20s\n", "number", "number's square", "numbers' cube");
    for (int i = min; i <= max; i++) {
        printf("%d %20d %20d\n", i, i*i, i*i*i);
    }

    return 0;
}