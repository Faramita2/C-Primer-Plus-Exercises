#include<stdio.h>
#define BASIC 10.00
#define OVERTIME_BREAK 40
#define OVERTIME 1.5
#define RATE1 0.15
#define RATE2 0.20
#define RATE3 0.25
#define BREAK1 300
#define BREAK2 450
#define TAXBASE1 RATE1 * BREAK1
#define TAXBASE2 TAXBASE1 + (BREAK2 - BREAK1) * RATE2
/*
Calculate after-tax wages.
*/
int main(void)
{
    int work_hours;
    float total_wages = 0.0;
    float tax = 0.0;
    float income = 0.0;
    float overtime_wages = 0.0;

    printf("Enter your work hours for a week: ");
    scanf("%d", &work_hours);

    overtime_wages = work_hours > OVERTIME_BREAK ? (work_hours - OVERTIME_BREAK) * OVERTIME : 0;
    total_wages = work_hours * BASIC + overtime_wages;
    if (total_wages <= 300)
    {
        tax = total_wages * RATE1;
    }
    else if (total_wages < 450)
    {
        tax = TAXBASE1 + (total_wages - BREAK1) * RATE2 ;
    }
    else
    {
        tax = TAXBASE2 + (total_wages - BREAK2) * RATE3;
    }
    income = total_wages - tax;
    printf("You total wages is %.2f, tax is %.2f, income is %.2f.\n", total_wages, tax, income);

    return 0;
}