#include <stdio.h>

int main() {
    int n;

    printf("Enter N: "); // Введіть елемент
    scanf("%d", &n);

    double Z[n]; 

    // Цикл для заповнення масиву
    for (int i = 0; i < n; i++) {
        printf("Enter %d element: ", i + 1); // Введіть елемент
        scanf("%lf", &Z[i]); 
    }

    // Цикл для модифікації елементів масиву
    for (int i = 1; i < n; i++) {
        if (Z[i] > 0) {
            Z[i] = 0.1;
        } else {
            Z[i] = Z[i] + 0.5;
        }
    }

    // Виведення масиву
    printf("Z: ");
    for (int i = 0; i < n; i++) {
        printf("%lf, ", Z[i]);
    }

    return 0;
}
