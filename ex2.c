int main(){

printf("calculadora de IMC\n");
float peso, altura, imc;
printf("Digite seu peso (em kg): ");
scanf("%f", &peso);
printf("Digite sua altura (em metros): ");
scanf("%f", &altura);

imc = peso / (altura * altura);
printf("O IMC de uma pessoa com o peso %.2f kg e altura %.2f m é igual a: %.2f\n", peso, altura, imc);

return 0;

}