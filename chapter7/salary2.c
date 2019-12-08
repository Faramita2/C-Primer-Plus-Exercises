#include <stdio.h>
#include <stdbool.h>
#define BASIC 10.00
#define BASE_SALARY1 8.75
#define BASE_SALARY2 9.33
#define BASE_SALARY3 10.00
#define BASE_SALARY4 11.20
#define OVERTIME_BREAK 40
#define OVERTIME 1.5
#define RATE1 0.15
#define RATE2 0.20
#define RATE3 0.25
#define BREAK1 300
#define BREAK2 450
#define TAXBASE1 RATE1 *BREAK1
#define TAXBASE2 TAXBASE1 + (BREAK2 - BREAK1) * RATE2
/*
Calculate after-tax wages with selected basic salary.
*/
int main(void)
{
    int work_hours;
    float base;
    float total_wages = 0.0;
    float tax = 0.0;
    float income = 0.0;
    float overtime_wages = 0.0;
    int choice;
    bool quit = false;
    bool next;

    while (true)
    {
        next = false;
        printf("\n*****************************************************************\n");
        printf("Enter the number corresponding to the desired pay rate or aciton:\n");
        printf("1) $%.2f/hr                     2) $%.2f/hr\n", BASE_SALARY1, BASE_SALARY2);
        printf("3) $%.2f/hr                     4) $%.2f/hr\n", BASE_SALARY3, BASE_SALARY4);
        printf("5) quit\n");
        printf("*****************************************************************\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            base = BASE_SALARY1;
            break;
        case 2:
            base = BASE_SALARY2;
            break;
        case 3:
            base = BASE_SALARY3;
            break;
        case 4:
            base = BASE_SALARY4;
            break;
        case 5:
            quit = true;
            break;
        default:
            printf("Please input the option between 1~5.\n");
            next = true;
            break;
        }

        if (quit)
        {
            break;
        }
        if (next)
        {
            continue;
        }

        printf("Enter your work hours for a week: ");
        scanf("%d", &work_hours);

        overtime_wages = work_hours > OVERTIME_BREAK ? (work_hours - OVERTIME_BREAK) * OVERTIME : 0;
        total_wages = work_hours * base + overtime_wages;
        if (total_wages <= 300)
        {
            tax = total_wages * RATE1;
        }
        else if (total_wages < 450)
        {
            tax = TAXBASE1 + (total_wages - BREAK1) * RATE2;
        }
        else
        {
            tax = TAXBASE2 + (total_wages - BREAK2) * RATE3;
        }
        income = total_wages - tax;
        printf("You total wages is $%.2f, tax is $%.2f, income is $%.2f.\n", total_wages, tax, income);
    }
    printf("Done!\n");

    return 0;
}