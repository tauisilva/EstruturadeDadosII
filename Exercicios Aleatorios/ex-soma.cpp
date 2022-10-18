#include <stdio.h>

float Soma(float a, float b){
	return a + b;
}

float Subt(float a, float b){
	return a - b;
}

float Prod(float a, float b){
	return a * b;
}
//
//float Soma(float a, float b){
//	return a + b;
//}
//
//float Soma(float a, float b){
//	return a + b;
//}

int main(){
	float num1, num2;
	printf("Informe o primeiro numero: ");
	scanf("%f", &num1);
	printf("Informe o segundo numero: ");
	scanf("%f", &num2);
	
	
	printf("\n A soma entre %.1f e %.1f = %.1f", num1, num2, Soma(num1, num2));
	printf("\n A subtracao de %.1f por %.1f = %.1f", num1, num2, Subt(num1, num2));
	printf("\n O produto entre %.1f e %.1f = %.1f", num1, num2, Prod(num1, num2));
//	printf("\n O numero %.1f elevado a %.1f = %.1f", num1, num2, Exponencial(num1, num2));
//	printf("\n O fatorial do numero %.0f = %i", num1, Fatorial(num1));
//	if (num2 != 0)
//		printf("\n A divisao de %.1f por %.1f = %.1f", num1, Div(num1));
//	else
//		printf("\n Nao pode dividir por zero!");
}
