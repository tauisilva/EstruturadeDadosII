#include <stdio.h>
int idade, vlrMaior, vlrMenor, Qtd, escolha;
float Soma;
char Genero;

int main(){
	int resposta, validaIdade;
	Qtd= 0;
	Soma=0;
	escolha=0;
	printf("*****************************Ola, Seja Bem-vindo*****************************");
	printf("\nPreciso que me informe alguns dados");
	printf("\nDeseja comecar?(1-Sim, 2-Nao) : ");
	scanf("%i", &escolha);
	if(escolha==1){
		do{
			printf("Ok, vamos comecar primeiro com a idade:");
			Qtd=Qtd+1;
		  	do{
			  	printf("\nInforme a idade do %i. aluno(1 ate 120) : ",Qtd);
			  	scanf("%i", &idade);
			  }while(idade < 1 | idade > 120);
			printf("\nAgora vamos para o genero:");  
	  		do{
				printf("\nInforme o genero do %i. aluno: ",Qtd);
		  		scanf("%s", &Genero);
			  }while(Genero = "M");
			  	if (Qtd==1) {  
			  	  	vlrMenor = idade;
					vlrMaior = idade;	
			  	}  
			  	else if (vlrMaior < idade) { 
			  	  	vlrMaior = idade;	
			  	} 
				  else if (vlrMenor > idade)
				    vlrMenor = idade;
				    
			  	Soma = Soma + idade;
				printf("Deseja informar os dados da proxima pessoa(1-sim|2-nao)?");
				scanf("%i", &resposta);
		}while(resposta == 1);
			printf("*****************************Resultados*****************************");
			printf("\n A soma das %i idades igual a %0.0f", Qtd, Soma); 
			printf("\n A media das %i idades igual a %.2f", Qtd, (Soma/Qtd));
			printf("\n O aluno com menor idade tem %i anos", vlrMenor); 
			printf("\n O aluno com maior idade tem %i anos", vlrMaior);
	}else

	printf("\n Muito Obrigado e ate a proxima!!!");
}
