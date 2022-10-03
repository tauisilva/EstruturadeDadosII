// Exerc�cio parte 1)
// Escreva um algoritmo que solicite a idade de n alunos ao usu�rio e ao final
// apresente O maior e o menor dos valores informados, a soma e a m�dia aritm�tica
// Parte 2)
// 2.1) Tratar idades inv�lidas (espectro deve compreender 1-120
// 2.2) Solicitar tamb�m o g�nero e ao final apresentar:
//      2.2.1) percentual de alunos por sexo (86% Feminino 14% Masculino) 
//      2.2.2) M�dia de idade dos homens e m�dia de idade das mulheres
//      2.2.3) Mulher mais nova/mais velha (idem para homem)
#include <stdio.h> // estamos carregando a biblioteca Standard Input Output
int idade, vlrMaior, vlrMenor, Qtd;
float Soma;
char Genero;

int main() { // esse � o m�todo principal do programa
  int resposta;
  Qtd=0;
  Soma=0;
  do {
  	Qtd=Qtd+1; // poderia ser tamb�m i++ ou i+=1;
  	printf("Informe a idade do %i. aluno: ",Qtd);
  	scanf("%i", &idade);
  	printf("Informe o sexo do %i. aluno: ",Qtd);
  	scanf("%c", &Genero);
  	if (Qtd==1) {  // esse abre chave � obrigat�rio pq temos mais de um comando
  	  vlrMenor = idade;
			vlrMaior = idade;	
  	}  // esse fecha chave � obrigat�rio pq temos mais de um comando
  	else if (vlrMaior < idade) { // esse abre chave � opcional pq temos um comando
  	  vlrMaior = idade;	
  	}  // esse fecha chave � opcional pq temos um �nico comando
	  else if (vlrMenor > idade)
	    vlrMenor = idade;
	    
  	Soma = Soma + idade;
  	printf("Deseja informar a proxima idade (1/Sim 2/Nao)? ");
  	scanf("%i", &resposta);
  } while (resposta == 1);
  printf("\n A soma das %i idades igual a %0.0f", Qtd, Soma); 
  printf("\n A media das %i idades igual a %.2f", Qtd, (Soma/Qtd));
  printf("\n O aluno com menor idade tem %i anos", vlrMenor); 
  printf("\n O aluno com maior idade tem %i anos", vlrMaior); 
}
