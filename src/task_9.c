#include <stdio.h>
#include <math.h>

#define ARRAY_SIZE 5 // Розмір масиву

int main() {
    int A[ARRAY_SIZE];
    int 
        max,      // Максимальний елемент
        minIndex;// Індекс мінімального елемнту
    
    //Цикл для заповнення масиву
    for(int i = 0; i < ARRAY_SIZE; i++) {
        printf("Enter %d element: ", i+1); // Введіть елемент
         scanf("%d", &A[i]);
    }

    max = A[0];

    // Цикл пошуку
    for(int i = 1; i < ARRAY_SIZE; i++) {
        if(A[i] > max) {
            max = A[i];
        }
        if(A[i] < A[minIndex]) {
            minIndex = i;
        }
         
    }
    printf("Maximum element: %d \n", max);
    printf("Minimum index: %d", minIndex);
    return 0;
}
