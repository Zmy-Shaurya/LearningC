#include <stdio.h>

int main()
{

        char ch;
        printf("Enter a character: ");
        scanf("%c", &ch);
        printf("\n%c has ascii code of %d\n",ch,ch);

        (ch >= 97 && ch <= 122)? printf("%c is lowercase",ch):printf("%c is not lowercase",ch);

        return 0;
}