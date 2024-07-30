/*Write a program to determine whether a student has passed or failed. To pass, a
student requires a total of 40% and at least 33% in each subject. Assume there
are three subjects and take the marks as input from the user.*/

#include<stdio.h>

int main()
{
        float a,b,c;
        printf("Enter marks of a out of 100: ");
        scanf("%f",&a);
        printf("\nEnter marks of b out of 100: ");
        scanf("%f",&b);
        printf("\nEnter marks of c out of 100: ");
        scanf("%f",&c);
        printf("\n");

        float total = a+b+c;
        float total_percent = (total/300)*100 ;

        if (total_percent >= 40 && a >= 33 && b >= 33 && c >= 33){
                printf("Passed");
        }
        else{
                printf("Failed");
        }
        return 0;
}