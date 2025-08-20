#include <stdio.h>

int main(){
    int x,y;
    printf("Digite o primeiro numero: ");
    scanf("%d", &x);
    printf("Digite o segundo numero: ");
    scanf("%d", &y);
    
    int soma = x + y;
    int subtracao = x - y;
    int multiplicacao = x * y;
    int divisao = x / y;

    printf("Soma: %d\n", soma);
    printf("Subtracao: %d\n", subtracao);
    printf("Multiplicacao: %d\n", multiplicacao);
    printf("Divisao: %d\n", divisao);

    return 0;

}