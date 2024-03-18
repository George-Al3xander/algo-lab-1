#include <stdio.h>
#include <math.h>

#define ARRAY_SIZE 15 // Розмір масиву

int main() {
    int Z[ARRAY_SIZE];
    int 
        max;    // Максимальний елемент      
    
    //Цикл для заповнення масиву
    for(int i = 0; i < ARRAY_SIZE; i++) {
        printf("Enter %d element: ", i+1); // Введіть елемент
         scanf("%d", &Z[i]);
    }

    max = Z[0];

    // Цикл пошуку
    for(int i = 1; i < ARRAY_SIZE; i++) {
        if(Z[i] > max) {
            max = Z[i];
        }       
    }
    printf("Maximum element: %d \n", max);     
    return 0;
}
