#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979323846

int main() {
    double 
        w = 4.2, 
        t = 0.0,
        y;
       
    while(t <= (PI / 2)) {
        const double t2 = 2.0 * t; 

        if((w * t) > PI) {
            y = sin(t2);
        } else {
            y = 1.0 + cos(t2);
        }
        printf("Y: %lf \n", y);
        
        t = t + (PI / 20);
    }

    return 0;
}
