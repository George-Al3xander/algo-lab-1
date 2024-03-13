#include <stdio.h>
#include <math.h>

int main() {
    double n, i = 1.0;
    double z = 1.0;
    printf("Enter N: "); // Введіть N
    scanf("%lf", &n);
    
    do {
        z = z * (n + i) / i;   
        i++;
    } while(i < 15.0);

    printf("N: %f \n", n);
    printf("Z: %f", z);
    

    return 0;
}
