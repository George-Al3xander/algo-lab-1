#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;
   
    printf("Enter A: "); // Введіть сторону A
    scanf("%d", &a);

    printf("Enter B: "); // Введіть сторону B
    scanf("%d", &b);

    printf("Enter C: ");// Введіть сторону C
    scanf("%d", &c);

    

    int angle_A = acos((pow(2, b) + pow(2, c) - pow(2, a)) / (2 * b * c)); // кут  А
    int angle_B = acos((pow(2, a) + pow(2, c) - pow(2, b)) / (2 * a * c)); // кут  B
    int angle_C = acos((pow(2, b) + pow(2, a) - pow(2, c)) / (2 * b * a)); // кут  C
    
    int p = (a + b + c) / 2; // Напівпериметр

    int square = sqrt(p * (p - a) * (p - b) * (p - c)); // Площа
    printf("\n"); 
    printf("a: %d \n" ,a); 
    printf("\n"); 
    printf("b: %d \n" ,b);
    printf("\n"); 
    printf("c: %d \n" ,c);
    printf("\n"); 
    printf("Angle a: %d \n" ,angle_A);
    printf("\n"); 
    printf("Angle b: %d \n" ,angle_B);
    printf("\n"); 
    printf("Angle c: %d \n" ,angle_C);
    printf("\n"); 
    printf("S: %d \n" ,square);
    

    return 0;
}