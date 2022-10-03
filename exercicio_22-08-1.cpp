//Exercicio 

// ----------- Parte 1 -----------)
//Escreva um algoritmo que solicite a idade de n alunos ao usu�rio e ao final apresente O maior, o Menor dos valores informados, a soma e a m�dia aritm�tica FEITO

// ----------- Parte 2 -----------) 
//2.1) Tratar idades invalidas (espectro deve compreender 1-120) FEITO
//2.2) Solicitar tamb�m o g�nero e ao final apresentar:
//	2.2.1) Percentual de alunos por sexo (ex: 86% Feminino - 14% Masculino) FEITO
//	2.2.2) M�dia de idade dos homens e m�dia de idade das mulheres FEITO
//	2.2.3) Mulher mais nova/velha, homem mais novo/velho

// ----------- Parte 3 -----------)
// 3.1 Ao final, gerar um relat�rio das idades ordenado de forma crescente

// ----------- Parte 4 -----------)
// 4.1) Solicitar o nome do aluno
// 4.2) Solicitar as 3 notas do aluno
// 4.3) Imprimir relat�rio de alunos aprovados e reprovados (considerando m�dia = 5):
// Aluna 1: Maria - idade: 16 - M�dia 7.9
// Aluna 2: Ana - idade: 17 - M�dia 8.4
// Aluno 3: Lucas - idade: 17 - M�ida 9.5
// Aluno 4: Carlos - idade: 15 - M�dia 8.7

// ----------- Parte 5 -----------)

#include <stdio.h>

struct Aluno {
	char nome[30];
	int idade;
	char sexo;
	float notas[10];
	float media;
	bool aprovado;
};

int soma, idade, vlrMaior, vlrMenor, vlrMaiorM, vlrMenorM, vlrMaiorH, vlrMenorH, h, m, alunos[100], qtdAlunos, sair;
float Soma, SomaH, SomaM, percentH, percentM, media;
char genero;
void imprimirOrdenado();


int main() { //Esse � o m�todo principal do programa 
  struct Aluno Alunos[100];
  int resposta;
  h=0; m=0; Soma=0; SomaH=0; SomaM=0; qtdAlunos=0;
  
do {
	qtdAlunos=qtdAlunos+1; //poderia ser i++ ou i+=1
	
	printf("\n Informe o nome do %i. aluno: ", qtdAlunos);
	scanf("%s", &Alunos[qtdAlunos].nome);
	do {
	  printf("\n Informe a idade de %s: ", Alunos[qtdAlunos].nome);
	  scanf("%i", &Alunos[qtdAlunos].idade);
	} while (Alunos[qtdAlunos].idade > 120 | Alunos[qtdAlunos].idade < 8); 
		
	do {
	  printf(" Informe o sexo de %s: ", Alunos[qtdAlunos].nome);
	  scanf("%s", &Alunos[qtdAlunos].sexo);
	} while (Alunos[qtdAlunos].sexo != 'M' & 
	         Alunos[qtdAlunos].sexo != 'm' &
			 Alunos[qtdAlunos].sexo != 'F' & 
			 Alunos[qtdAlunos].sexo != 'f');
	if(qtdAlunos==1) { //Esse abre chave � obrigatorio, pois tem mais de um comando
		vlrMenor = idade;
		vlrMaior = idade;
	}
			
			if(Alunos[qtdAlunos].sexo == 'M' | Alunos[qtdAlunos].sexo == 'm') {
				h=h+1;

				if(h==1) {
					vlrMenorH = idade;
					vlrMaiorH = idade;
					
				}
				else if (vlrMaior < idade) {
					vlrMaior = idade;
					vlrMaiorH = idade;
				} 
				else if (vlrMenor > idade) {
					vlrMenor = idade;
					vlrMenorH = idade;
				}
				Soma = Soma + idade;
				SomaH = SomaH + idade;	
			}
			
			else if (genero == 'F' | genero == 'f') {
				m=m+1;

				if(m==1) {
					vlrMenorM = idade;
					vlrMaiorM = idade;
				}
				else if (vlrMaior < idade) {
					vlrMaior = idade;
					vlrMaiorM = idade;
				} 
				else if (vlrMenor > idade) {
					vlrMenor = idade;
					vlrMenorM = idade;
				}
				Soma = Soma + idade;
				SomaM = SomaM + idade;	
			}		
			float quantidade= qtdAlunos;
			percentH = h*100 / quantidade;
			percentM = m*100 / quantidade;
			alunos[qtdAlunos] = idade;
		
	
	soma = 0;
	for (int n=1; n<=3; n++) {
		do{
			printf(" Informe a %d. nota: ", n);
	  		scanf("%f", &Alunos[qtdAlunos].notas[n]);
	  		soma += Alunos[qtdAlunos].notas[n];
		} while (Alunos[qtdAlunos].notas[n] > 0 | Alunos[qtdAlunos].notas[n] <= 10);
	}
	
 	Alunos[qtdAlunos].aprovado = ((soma/3) > 6);
	Alunos[qtdAlunos].media = (soma/3);
	
	
	printf("\n Deseja informar os dados do proximo aluno (1/Sim 2/Nao)?");
	scanf("%i", &resposta);
} while (resposta == 1);
	
//	printf("\n O aluno com maior idade tem %i ano(s)", vlrMaior);
//	printf("\n O aluno com menor idade tem %i ano(s)", vlrMenor);
//	
//	printf("\n\n A soma das %i idades eh igual a %.f",qtdAlunos, Soma);
//	printf("\n A media aritmetica das %i idades eh: %.2f anos", qtdAlunos, (Soma / qtdAlunos));
//	
//	printf("\n\n A media de idade dos %i homens eh: %.2f anos", h, (SomaH / h));
//	printf("\n A media de idade das %i mulheres eh: %.2f anos", m, (SomaM / m));
//	
//	printf("\n\n Porcentagem de homens: %.f%%", percentH);
//	printf("\n Porcentagem de mulheres: %.f%%", percentM);
//	
//	printf("\n\n Mulher mais nova: %i", vlrMenorM);
//	printf("\n Mulher mais velha: %i", vlrMaiorM);
//	
//	printf("\n\n Homem mais novo: %i", vlrMenorH);
//	printf("\n Homem mais velho: %i", vlrMaiorH);
//	imprimirOrdenado();
//	
//	printf("\n Pressione 1 para sair ");
//	scanf("%i", &sair);

//	printf(" O aluno %s foi aprovado... %: ", Alunos[qtdAlunos].nome, Alunos[qtdAlunos].aprovado);
	printf("\n Relatorios de Aprovados");
	for(int x=1; x<=qtdAlunos; x++){
		if(Alunos[x].aprovado){
			if(Alunos[x].sexo == 'm' | Alunos[x].sexo == 'M'){
				printf("\nAluno: %s - Idade %i - Media: %2f", Alunos[x].nome, Alunos[x].idade, Alunos[x].media);
			}else{
				printf("\nAluna: %s - Idade %i - Media: %2f", Alunos[x].nome, Alunos[x].idade, Alunos[x].media);
			}
		}

	}
	printf("\n");
	printf("\n Relatorios de Reprovados");
	for(int x=1; x<=qtdAlunos; x++){
		if(Alunos[x].aprovado == false){
			if(Alunos[x].sexo == 'm' | Alunos[x].sexo == 'M'){
				printf("\nAluno: %s - Idade %i - Media: %2f", Alunos[x].nome, Alunos[x].idade, Alunos[x].media);
			}else{
				printf("\nAluna: %s - Idade %i - Media: %2f", Alunos[x].nome, Alunos[x].idade, Alunos[x].media);
			}
		}
	}

}

void imprimirOrdenado(){
	int aux;
	for (int j=1; j<qtdAlunos; j++)
		for (int i=0; i<qtdAlunos-1; i++)
			if (alunos[i] > alunos[i+1]) {
				aux = alunos[i];
				alunos[i] = alunos[i+1];
				alunos[i+1] = aux;
			}
	printf("\n\n===== Relatorio de Alunos por idade =====");
	for (int i=1; i<=qtdAlunos; i++)
		printf("\n Aluno %i: %i", i, alunos[i]);
		printf("\n Fim do relatorio...");
}
