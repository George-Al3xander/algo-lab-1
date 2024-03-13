#include <stdio.h>
#include <math.h>

int main() {
    int a, b, max, min;

    printf("Enter A: "); // Введіть A
    scanf("%d", &a);

    printf("Enter B: "); // Введіть B
    scanf("%d", &b);

    if (a > b) {
        max = a;
        min = b;
    } else {
        max = b;
        min = a;
    }

    double w = (max / min + min / max) / pow(max, 1.0 / 3.0);

    printf("\n");
    printf("a: %d\n", a);
    printf("b: %d\n", b);
    printf("w: %f\n", w); 

    return 0;
}
