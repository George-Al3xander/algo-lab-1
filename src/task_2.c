#include <stdio.h>
#include <math.h>



int main() {

    double a =  1.45;
    double b = 2.1;
    double x = 0.14;

    double v = log10(sin(x)) + pow(3.0, 5.0 * x) - pow(sin(x), 2.0);

    double y = pow(a + b * x, 1.0 / 7.0) + tan(fabs(a * x));

    double z = (a - 1.4 * exp(3 * y)) / (2.7e-2 * cos(pow(x, 2)));

    double w = acos(5.0 * x) + sqrt(log10(v)) + pow(a, 3) * z + y;

    printf("v: %lf \n", v);
    printf("y: %lf \n", y);
    printf("z: %lf \n", z);
    printf("w: %lf \n", w);


    return 0;
}