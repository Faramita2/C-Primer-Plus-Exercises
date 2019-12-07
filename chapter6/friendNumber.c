#include<stdio.h>
/*
Calculate the number of friends per week.
*/
int main(void)
{
    int friend = 5;
    const int dunbar_num = 150;

    int week = 0;
    while (friend < dunbar_num) {
        week++;
        friend = (friend - week) * 2;
        printf("%d week, friends number is %d.\n", week, friend);
    }

    return 0;
}