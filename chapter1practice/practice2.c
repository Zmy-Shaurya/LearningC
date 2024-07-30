//celsius to fahrenheit formula

#include<stdio.h>

int main()
{
        float celcius, fahrenheit;
        scanf("%f", &celcius);
        fahrenheit = (celcius * (9.0/5.0) + 32);
        printf("Fahrenheit equivalent: %f\n", fahrenheit);
        return 0;
}