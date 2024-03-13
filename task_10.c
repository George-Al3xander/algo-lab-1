#include <stdio.h>
#include <math.h>

#define ARRAY_SIZE 5 // Розмір масиву

int main() {
    int C[ARRAY_SIZE];
    int 
        count = 0,      // Кількість позитивних елементів
        product = 1;//  Добуток позитивних елементів
    
    //Цикл для заповнення масиву
    for(int i = 0; i < ARRAY_SIZE; i++) {
        printf("Enter %d element: ", i+1); // Введіть елемент
        scanf("%d", &C[i]);
    }
  
    for(int i = 0; i < ARRAY_SIZE; i++) {
        if(C[i] > 0) {
            product = product * C[i];
            count++;
        }         
    }

    if(count > 0) {
        double geom = pow(product, 1/count);
        printf("Geom: %lf \n", geom);
    } else {
        printf(":( \n");
    }

   
    return 0;
}
