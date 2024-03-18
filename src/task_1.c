#include <stdio.h>
#include <math.h>
#define PI 3.14159265358979323846
int main() {
    int a, b, c;
   
    printf("Enter A: "); // Введіть сторону A
    scanf("%d", &a);

    printf("Enter B: "); // Введіть сторону B
    scanf("%d", &b);

    printf("Enter C: ");// Введіть сторону C
    scanf("%d", &c); 

    
   
    double angle_A = acos((b * b + c * c - a * a) / (2.0 * b * c)) * 180.0 / PI; // кут  А
    double angle_B = acos((a * a + c * c - b * b) / (2.0 * a * c)) * 180.0 / PI; // кут  B
    double angle_C = acos((b * b + a * a - c * c) / (2.0 * b * a)) * 180.0 / PI; // кут  C
     //Домножуємо на 180.0 / PI, щоб перевсти значення з радіан у градуси

     
    int p = (a + b + c) / 2; // Напівпериметр

    int square = sqrt(p * (p - a) * (p - b) * (p - c)); // Площа
    
    printf("\n");    
    
    printf("a: %d \n" ,a);     
    printf("b: %d \n" ,b);    
    printf("c: %d \n" ,c);    
    printf("Angle a: %.2f \n" ,angle_A );  
    printf("Angle b: %.2f \n" ,angle_B );    
    printf("Angle c: %.2f \n" ,angle_C );    
    printf("P: %d \n" ,p);
    printf("S: %d \n" ,square);
    printf("\n"); 
    
    return 0;
}