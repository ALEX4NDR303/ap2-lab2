#include <stdio.h>
#include <math.h>

int main() {

    printf("Calculadora de area de circulo");
    float raio, area;

    printf("Digite o raio do circulo: ");
    scanf("%f", &raio);

    area = (raio * raio) * 3.14159;

    printf("Um circulo com raio %.2f tem area igual a %.2f", raio, area);

    return 0;
    
}