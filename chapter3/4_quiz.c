#include <stdio.h>

int main()
{
        int grade;
        printf("Enter your grade (0-100): ");
        scanf("%d", &grade);
        if (grade >= 90 && grade <= 100)
        {
                printf("Your grade is A.\n");
        }
        else if (grade >= 80 && grade <= 89)
        {
                printf("Your grade is B.\n");
        }
        else if (grade >= 70 && grade <= 79)
        {
                printf("Your grade is C.\n");
        }
        else if (grade >= 60 && grade <= 69)
        {
                printf("Your grade is D.\n");
        }
        else if (grade >= 50 && grade <= 59)
        {
                printf("Your grade is E.\n");
        }
        else if (grade < 50)
        {
                printf("Your grade is F.\n");
        }
        return 0;
}