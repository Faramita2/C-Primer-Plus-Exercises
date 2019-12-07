#include<stdio.h>
/*
考虑下面两个无限序列:
1.0 + 1.0/2.0 + 1.0/3.0 + 1.0/4.0 + ...
1.0 - 1.0/2.0 + 1.0/3.0 - 1.0/4.0 + ...
编写一个程序计算这两个无限序列的总和，直到到达某次数。提示：奇数个-1相乘得-1，偶数个
-1相乘得1.让用户交互地输入指定的次数，当用户输入0或负值时结束输入。查看运行100项、
1000项、10000项后的总和，是否发现每个序列都收敛于某值？
*/
void special_1(int times);
void special_2(int times);
int main(void)
{
    int times;
    float result_1, result_2;

    printf("How many times you want to run?\n");
    while (1 == scanf("%d", &times) && times > 0) {
        special_1(times);
        special_2(times);
        printf("How many times you want to run?\n");
    }
    special_1(100);
    special_2(100);
    special_1(1000);
    special_2(1000);
    special_1(1000000);
    special_2(1000000);
    printf("Done.\n");

    return 0;
}

void special_1(int times) {
    float result = 0.0;
    float end;
    for (int i = 1; i <= times; i++) {
        end = 1.0 * i;
        result += 1.0 / end;
    }

    printf("1.0 + 1.0/2.0 + 1.0/3.0 + 1.0/4.0 + ... tend to be %f.\n", result);
}

void special_2(int times) {
    float result = 0.0;
    int factor = -1;
    float end;
    for (int i = 1; i <= times; i++) {
        factor *= -1;
        end = (1.0 * i) * factor;
        result += 1.0 / end;
    }

    printf("1.0 - 1.0/2.0 + 1.0/3.0 - 1.0/4.0 + ... tend to be %f.\n", result);
}