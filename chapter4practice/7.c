//7. Write a program to calculate the sum of the numbers occurring in the multiplication table of 8. (consider 8 x 1 to 8 x 10).

#include<stdio.h>

int main()
{
        int sum = 0;
        for (int a = 1; a <=10; a++){
                sum += 8*a;
        } printf("sum = %d\n",sum);
        return 0;
}