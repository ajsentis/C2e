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

    celsius = lower;
    printf("Celsius\t Fahrenheit\n");
    while (celsius<=upper) {
        fahr = (9 * celsius / 5) + 32;
        printf("%3.0f\t%6.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
}
