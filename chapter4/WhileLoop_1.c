/*
while (condition)
{
        statements
        statements
        break ; // if needed
}
*/
#include<stdio.h>
int main()
{
        int counter = 0;
        while (counter <= 10)
        {
                printf("%d\n", counter+10);
                counter++;
        }
        return 0;
}

