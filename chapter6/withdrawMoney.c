#include<stdio.h>
/*
Chuckie Lucky赢得了100万美元（税后），他把奖金存入年利率8%的账户。在每年的最后一天，
Chuckie取出10万美元。编写一个程序，计算多少年后Chuckie会取完账户的钱?
*/
int main(void)
{
    float money = 100.0;
    const float rate = 0.08;

    int year = 0;
    do {
        year++;
        money = money * (1 + rate) - 10;
        printf("After %d year(s), the remaining money is %f.\n", year, money);
    } while (money > 0);

    printf("After %d years, the money spend out.\n", year);

    return 0;
}