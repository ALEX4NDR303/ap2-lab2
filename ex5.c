#include <stdio.h>
#include <math.h>

int main() {

    printf("Calculadora de área de círculo");
    float raio, area;

    printf("Digite o raio do círculo: ");
    scanf("%f", &raio);

    area = (raio * raio) * 3.14159;

    printf("Um círculo com raio %.2f tem área igual a %.2f", raio, area);

    return 0;
    
}