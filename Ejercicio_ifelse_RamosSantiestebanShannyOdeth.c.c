#include <stdio.h>
int main(){
    int numero;
    printf("Ingresa un numero es entero :");
    scanf("%d",&numero);  
    if(numero>0){
        printf("El numero es positivo");
    }else if(numero<0){
        printf("El numero es negativo");

    }else if(numero==0){
        printf("El numero es cero");
    }
    return 0;
}
