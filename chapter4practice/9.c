#include<stdio.h>

int main()
{
        int factorial = 1;
        int n;
        printf("Enter a number: ");
        scanf("%d", &n);

        int counter = 1;
        while (counter <= n){
                factorial *= counter;
                counter++;
        } printf("factorial = %d\n",factorial);
        return 0;
}