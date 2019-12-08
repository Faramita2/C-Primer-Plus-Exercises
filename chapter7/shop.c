#include <stdio.h>
#include <stdbool.h>
#define ARTICHOKE 1.15
#define BEET 1.15
#define CARROT 1.09
#define BREAK 100
#define RATE 0.05
#define MIN1 5
#define MIN1_FEE 6.5
#define MIN2 20
#define MIN2_FEE 14
#define MIN3_FEE_RATE 0.5
/*
*/
float getWeight();
int main(void)
{
    bool next;
    bool over = false;
    int choice;
    float total_artichoke = 0.0;
    float total_beet = 0.0;
    float total_carrot = 0.0;
    float add_weight;

    float artichoke_fee = 0.0;
    float beet_fee = 0.0;
    float carrot_fee = 0.0;
    float total_fee = 0.0;
    float total_weight = 0.0;
    float freight = 0.0;
    bool isDiscount = false;
    float discount_fee = 0.0;

    while (true)
    {

        while (true)
        {
            next = false;
            printf("\n*****************************************************************\n");
            printf("Enter the number corresponding to the desired pay rate or aciton:\n");
            printf("1) Add ARTICHOKE                     2) Add BEET\n");
            printf("3) Add CARROT                        4) It's OK!\n");
            printf("*****************************************************************\n");
            scanf("%d", &choice);

            switch (choice)
            {
            case 1:
                printf("Please input how maney weight artichoke would you like: ");
                total_artichoke += getWeight();
                next = true;
                break;
            case 2:
                printf("Please input how maney weight beet would you like: ");
                total_beet += getWeight();
                next = true;
                break;
            case 3:
                printf("Please input how maney weight carrot would you like: ");
                total_carrot += getWeight();
                next = true;
                break;
            case 4:
                over = true;
                break;
            default:
                printf("Please input the option between 1~4.\n");
                next = true;
                break;
            }

            if (over)
            {
                break;
            }

            if (next)
            {
                continue;
            }
        }

        artichoke_fee = total_artichoke * ARTICHOKE;
        beet_fee = total_beet * BEET;
        carrot_fee = total_carrot * CARROT;
        total_fee = artichoke_fee + beet_fee + carrot_fee;
        if (total_fee > BREAK)
        {
            discount_fee = total_fee * RATE;
            total_fee -= discount_fee;
            isDiscount = true;
        }

        total_weight = total_artichoke + total_beet + total_carrot;

        if (total_weight <= MIN1)
        {
            freight = MIN1_FEE;
        }
        else if (total_weight <= MIN2)
        {
            freight = MIN2_FEE;
        }
        else
            freight = MIN2_FEE + (total_weight - MIN2) * MIN3_FEE_RATE;


        if (total_fee > 0)
        {
            printf("ARTICHOKE: $%.2f/lb, BEET: $%.2f/lb, CARROT: $%.2f/lb.\n", ARTICHOKE, BEET, CARROT);
            printf("Your ARTICHOKEs cost: $%.2f, BEETs cost: $%.2f, CARROT cost: $%.2f\n", artichoke_fee, beet_fee, carrot_fee);
            printf("Your order has total %.2f lbs.\n", total_weight);
            printf("You have $%.2f freight.\n", freight);
            if (isDiscount)
            {
                printf("You have $%.2f discount.\n", discount_fee);
            }

            printf("Your order total costs $%.2f.\n", total_fee + freight);
        }
        else 
            printf("Your order don't have anything.\n");
    }
}

float getWeight()
{
    float weight;
    while (scanf("%f", &weight) != 1 || weight <= 0)
        printf("Please input correct weight.\n");

    return weight;
}