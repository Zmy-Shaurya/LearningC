#include <stdio.h>

int main()
{
        int a = 234, b = 0;
        printf("a and b are %d\n", a && b); // returns False hence a&&b = 0
        printf("a or b are %d\n", a || b);  // returns True hence a||b = 1
        printf("the value of not(a) and not(b) is %d and %d\n", !a, !b); // returns not(a)= 0 and not(b)= 1 
        printf("the value of not(a and b) is %d", !(a && b)); // returns not(a and b) = True)
        printf("the value of not(a or b) is %d", !(a || b)); // returns not(a or b) = False)
        return 0;
}

/*if (a&&b){}

is same as writing

if (a){
        if (b){
        }
} */