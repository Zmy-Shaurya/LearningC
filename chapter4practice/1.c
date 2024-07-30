
// 1. Write a program to print multiplication table of a given number n

#include <stdio.h>

int main()
{
        int n;
        printf("Enter a number:");
        scanf("%d", &n);
        int counter = 1;
        while (counter <= 10)
        {
                printf("%d x %d = %d\n", n, counter, n * counter);
                counter += 1;
        }
        return 0;
}