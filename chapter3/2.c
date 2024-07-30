#include<stdio.h>

int main()
{
        int a;
        printf("Enter an integer: ");
        scanf("%d", &a);
        if (a == 0){
                printf("A is zero\n");
        }
        else if (a > 0 && a < 50){
                printf("A is positive and less than 50\n");
        }
        else if (a >50 && a < 100){
                printf("A is greater than 50 and less than 100\n");
        }
        else if (a > 100){
                printf("A is greater than 100\n");
        }
        else{
                printf("A is negative\n");
        }

        return 0;
}