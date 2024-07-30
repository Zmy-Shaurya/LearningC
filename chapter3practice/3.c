/*Calculate income tax paid by an employee to the government as per the slabs
mentioned below:
        Income Slab            Tax
        2.5 – 5.0L             5%
        5.0L - 10.0L           20%
        Above 10.0L            30%
Note that there is no tax below 2.5L. Take income amount as an input from the user.*/

#include<stdio.h>

int main()
{
        float income;
        printf("enter income: ");
        scanf("%f", &income);

        if (income < 250000)
                printf("No tax")
        else if (income > 250000 && income < 500000)
                printf("tax = 5%")
        else if (income > 500000 && income < 1000000)
                printf("tax = 20%")
        else if (income > 1000000)
        
        return 0;
}