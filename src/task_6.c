#include <stdio.h>
#include <math.h>

int main() {
    double a, 
           i,
           sigma = 0.0, 
           p = 1.0;

    printf("Enter A: "); // Введіть a
    scanf("%lf", &a);

    for (i = 2.0; i < 15.0; i++) {
        sigma = sigma + pow(i, 2.0); 
    }
   
    for (i = 1.0; i < 10.0; i++) {
        p = p * (sin(pow(i, 2.0)) / (i + 1.0));
    }

    double s = pow(a, 1.0 / 3.0) + sigma / p;

    printf("a: %lf \n", a);
    printf("sigma: %lf \n", sigma);
    printf("p: %lf \n", p);
    printf("s: %lf \n", s);

    return 0;
}
