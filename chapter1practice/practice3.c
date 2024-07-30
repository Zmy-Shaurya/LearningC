//simple interest calculator

#include<stdio.h>

int main()
{
        float rate, principle, time;
        scanf("%f", &rate);
        scanf("%f", &principle);
        scanf("%f", &time);
        float interest = (rate * principle * time)/100;
        printf("interest: %f\n", interest);
        return 0;
}