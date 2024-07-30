
//Quick Quiz: Write a program to print first ‘n’ natural number using do-while loop.

#include <stdio.h>
int main()
{
        int n;
        printf("Enter a number: ");
        scanf("%d", &n);
//do-while loop
        int counter = 1;
        do {
                printf("%d \n", counter);
                counter++;
        } while (counter <= n);
        return 0;
}