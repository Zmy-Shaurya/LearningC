#include<stdio.h>

int main()
{
        int a = 1345, b = 2234, c = 3234, d = 434;

        if (a > b && a >c && a >d)
                printf("%d is theclargest number\n", a);    

        if (b > a && b >c && b >d)
                printf("%d is the largest number\n", b);  

        if (c > b && c >a && c >d)
                printf("%d is the largest number\n", c);  

        if (d > b && d >c && d >a)
                printf("%d is the largest number\n", d);

        return 0;
}