#include<stdio.h>

int main()
{
        int n = 1, sum = 0;
        
        do{
                sum += n;
                n++;
        }while(n <= 10);
        printf("%d\n", sum);
        return 0;
}