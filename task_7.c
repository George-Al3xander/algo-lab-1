#include <stdio.h>
#include <math.h>

int main() {
    double 
        a = -1.0, 
        b = 0.75, 
        x, 
        y;

    for (x = 1.35; x <= 6.5; x = x + 0.8) {
        y = atan(b * x) / (1.0 + sin(x));
        printf("Y: %lf \n", y);
    }

    return 0;
}