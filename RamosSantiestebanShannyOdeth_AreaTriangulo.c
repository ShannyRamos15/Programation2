#include <stdio.h>
 int main() {
   float base,altura,area;
    printf("Ingresa la base:");
    scanf("%f",&base);
    printf("Ingresa la altura:");
    scanf("%f",&altura);
    area=(base*altura)/2;
    printf("El area es: %.2f",area);
    return 0;
 }