#include <stdio.h>
#include <math.h>

int main() {
    double c, x, a, g;

    printf("Enter A: "); // Введіть A
    scanf("%lf", &a); // 

    printf("Enter C: "); // Введіть C
    scanf("%lf", &c);

    printf("Enter X: "); // Введіть X
    scanf("%lf", &x);
    

    switch (c * c - x > 0) {
        case 1:
            g = 1.90 * pow(a, (0-x));
            break;
        case 0:
            g = ((0.94 + a) / c) * pow(exp(1), x);
            break;     
    }
 
    printf("\n");
    printf("a: %f\n", a); 
    printf("c: %f\n", c);
    printf("x: %f\n", x);
    printf("g: %f\n", g);

    return 0;
}
