// Exercício parte 1)
// Escreva um algoritmo que solicite a idade de n alunos ao usuário e ao final
// apresente O maior e o menor dos valores informados, a soma e a média aritmética
// Parte 2)
// 2.1) Tratar idades inválidas (espectro deve compreender 1-120
// 2.2) Solicitar também o gênero e ao final apresentar:
//      2.2.1) percentual de alunos por sexo (86% Feminino 14% Masculino)
//      2.2.2) Média de idade dos homens e média de idade das mulheres
//      2.2.3) Mulher mais nova/mais velha (idem para homem)
// Parte 3)
// Ao final, gerar um relatório das idades ordenado de forma crescente
// Parte 4)
// Refazer o item 3 anterior para imprimir também o nome considerando o gênero:
// Aluna 1: Maria - idade: 16
// Aluno 2: Antonio - idade: 17
// Aluno 3: Carlos - idade: 17
// Aluna 4: Ana - idade: 19

#include <stdio.h> 
#include <iostream>
#include <string>
int idade, vlrMaior, vlrMenor, Qtd, alunos[100];
float Soma;
char Genero;
void imprimirOrdenado();

int main(){
	int resposta, escolha;
	Qtd = 0;
	Soma = 0;
	printf("\n*****************************Ola, Seja Bem-vindo*****************************\n");
	printf("\nPreciso que me informe alguns dados");
	printf("\nDeseja comecar?(1-Sim, 2-Nao) : ");
	scanf("%i", &escolha);
	if (escolha == 1){
		do{
			Qtd = Qtd + 1;
			do{
				printf("\nOk! vamos comecar, informe a idade do %i. aluno [1-120]: ", Qtd);
				scanf("%i", &idade);
			} while (idade > 120 | idade < 1);
			do{
				printf("Agora informe o genero do %i. aluno(M-F): ", Qtd);
				scanf("%s",&Genero);
			}while(Genero == 'M' || Genero == 'F' );
			if (Qtd == 1){
				vlrMenor = idade;
				vlrMaior = idade;
			} 
			else if (vlrMaior < idade){ 
				vlrMaior = idade;
			} 
			else if (vlrMenor > idade)
				vlrMenor = idade;
			alunos[Qtd] = idade;
			Soma = Soma + idade;
			printf("Deseja informar os dados do proximo (1/Sim 2/Nao)? ");
			scanf("%i", &resposta);
		} while (resposta == 1);

		printf("\n A soma das %i idades igual a %0.0f", qtd, Soma);
		printf("\n A media das %i idades igual a %.2f", qtd, (Soma / qtd));
		printf("\n O aluno com menor idade tem %i anos", vlrMenor);
		printf("\n O aluno com maior idade tem %i anos", vlrMaior);
		imprimirOrdenado();

	}else

	printf("\n***************************** Muito Obrigado e ate a proxima!!!*****************************");
}
void imprimirOrdenado()	{
	int aux;
	for (int j = 1; j < Qtd; j++)
	for (int i = 0; i < Qtd - 1; i++)
		if (alunos[i] > alunos[i + 1]){
			aux = alunos[i];
			alunos[i] = alunos[i + 1];
			alunos[i + 1] = aux;
		}
		printf("\n Relatorio de Alunos por idade");
	for (int i = 1; i <= Qtd; i++)
		printf("\n  Aluno %i: %i", i, alunos[i]);
		printf("\n Fim do Relatorio...");
}