#include <stdio.h> 

int main() {
    float a; // Use char instead of int for reading a character
    scanf("%f", &a); // Pass the address of 'a' to scanf
    printf("The text was:%f\n", a); // Use %c to print a character
    return 0;
}

//this is a single line comment

/*
%c = only 1 or first character entered
%d = only 1 or first number entered
%f = takes the whole value
*/