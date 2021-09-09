#include <stdio.h>
float convert(float fahr, float celsius) {
        celsius = 5 * (fahr-32)/9;
		return celsius;
}

int main() {
    float fahr, celsius;
    float lower, upper, step;

    lower = 0.0;	/* lower limit of temperature table */
    upper = 300.0;	/* upper limit */
    step = 20.0;	/* step size */

    celsius = 0.0;
    fahr = lower;
    while (fahr <= upper) {
        celsius = convert(fahr, celsius);
        printf("%f\t%f\n", fahr, celsius);
        fahr = fahr + step;
    }

    return (0);
}
