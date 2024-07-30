#include<stdio.h>

int main()
{
        int a = 5;
        int b = 34;

        a>b ? printf("%d is greater than %d", a, b) : printf("%d is greater than %d", b, a);
        //here "?" and ":" are called ternary operators
        // SYNTAX: <condition> ? <statement if True> : <statement if False> ;

        return 0;
}