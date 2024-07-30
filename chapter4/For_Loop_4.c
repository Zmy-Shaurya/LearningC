#include<stdio.h>

int main()
{
        int n;
        printf("Enter a number: ");
        scanf("%d", &n);

        for (int a = 1 ; a <= n ; a++)
        {
                if (a == 10)
                        continue;  // ignores the lines below it and moves to next iteration
                printf("%d \n", a);
        }
        return 0;
}