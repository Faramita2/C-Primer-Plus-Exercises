#include <stdio.h>
#include <stdbool.h>
#define SINGLE_BASE 17850
#define OWNER_BASE 23900
#define MARRIED_BASE 29750
#define DIVORCE_BASE 14875
#define RATE 0.15
#define EXTRA 0.28
/*
Select type and calculate tax.
*/
int main(void)
{
    int choice;
    float base;
    float money;
    float tax;
    bool quit = false;
    bool again;

    while (true)
    {
        again = false;
        printf("\n*****************************************************************\n");
        printf("Enter the tax type or aciton:\n");
        printf("1) SINGLE                      2) OWNER\n");
        printf("3) MARRIED                     4) DIVORCE\n");
        printf("5) quit\n");
        printf("*****************************************************************\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            base = SINGLE_BASE;
            break;

        case 2:
            base = OWNER_BASE;
            break;

        case 3:
            base = MARRIED_BASE;
            break;

        case 4:
            base = DIVORCE_BASE;
            break;

        case 5:
            quit = true;
            break;

        default:
            again = true;
            break;
        }

        if (quit)
        {
            break;
        }

        if (again)
        {
            printf("Please input the correct choice.\n");
            continue;
        }

        printf("Please input your salary: ");
        while (1 == scanf("%f", &money) && money >= 0)
        {
            tax = money * RATE + (money - base > 0 ? (money - base) * EXTRA : 0);
            printf("Your %.2f money tax: %.2f\n", money, tax);
            break;
        }
    }
    printf("Done!\n");

    return 0;
}