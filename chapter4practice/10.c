#include<stdio.h>

int main()
{
        int n; 
        printf("enter a number:");
        scanf("%d",&n);

        for (int i = 1; i <= n; i++){
                if (n == 1) printf("it is neither prime nor composite");
                if (i == 1) continue;
                else if (i < n && n % i == 0){ printf("it is not prime"); break;}
                else if (i ==n) printf("it is prime");

        }
        return 0;
}