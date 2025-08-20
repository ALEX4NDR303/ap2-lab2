#include <stdio.h>
#include <tgmath.h>

int main(){

    printf("Calculadora de hipotenusa\n");

    float cat1,cat2;

    printf("Digite o primeiro cateto");
    scanf("%f",&cat1);
    printf("Digite o segundoo cateto");
    scanf("%f",&cat2);

    float h = sqrt(cat1*cat1 + cat2*cat2);
    scanf("%f",&h);
    printf("Um triângulo retângulo com lados %.2f e %.2f tem uma hipotenusa igual a %.2f",cat1,cat2,h);

}