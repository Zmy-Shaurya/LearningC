//2. Write a program to print multiplication table of 10 in reversed order.

#include <stdio.h>

int main()
{
        int n = 10;
        for (int a = 10; a >= 1; a--)
                printf("%d * %d = %d\n", a, n, a * n);
        return 0;
}