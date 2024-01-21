#include <stdio.h>

/* print Fahrenheit-Celsius Table
    for fahr = 0, 20, ..., 300 */

int main(void)
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    printf("Fahrenheit \t Celsius\n");
    while (fahr<=upper) {
        celsius = 5 * (fahr-32) / 9;
        printf("%3.0f\t\t%6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}

