//Pedir dados de alunos:
//idades(1-120)
//sexo(M-F)
//3 notas
//imprimir relatorio com
//alunos reprovados e aprovados


#include <iostream>
#include <stdio.h>

int idade, idadeMaior, idadeMenor, qtd, qtdM, qtdF, resposta, escolha, mMaior, mMenor, fMaior, fMenor, alunos[100];
float somaIdade, somaM, somaF, porcentagemF;
//void imprimirOrdenado;

struct Aluno{
    char nome[30];
    int idade;
    char genero;
    float notas[10];
    bool aprovado;
};

int main(){
    struct Aluno Alunos[100];
    qtdM = 0;
    qtdF = 0;
    qtd = 0;
    somaIdade = 0;

    printf("\n*****************************Ola, Seja Bem-vindo*****************************\n");
	printf("\nPreciso que me informe alguns dados");
	printf("\nDeseja comecar?(1-Sim, 2-Nao): ");
    scanf("%i", &escolha);

    if (escolha == 1){
        do{
            qtd = qtd + 1;
            printf("Ok, Me informe o nome do %i. aluno(a): ", qtd);
            scanf("%s", &Alunos[qtd].nome);
            do{
                printf("Agora me informe a idade %s. aluno(a): ", Alunos[qtd].nome);
                scanf("%i", &Alunos[qtd].idade);
            } while (Alunos[qtd].idade > 120 | Alunos[qtd].idade < 1);
            do{
                printf("Informe o genero do %s aluno[M-F]", Alunos[qtd].nome);
                scanf("%s", &Alunos[qtd].genero);
            }while(Alunos[qtd].genero != 'M' &
                   Alunos[qtd].genero != 'm' &
                   Alunos[qtd].genero != 'F' &
                   Alunos[qtd].genero != 'f');
            
            if(Alunos[qtd].genero == 'M' || Alunos[qtd].genero == 'm'){
                qtdM = qtdM + 1;
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


            }else if(Alunos[qtd].genero == 'F' || Alunos[qtd].genero == 'f'){
                qtdF = qtdF + 1;
                if(qtdF == 1){
                    fMenor = 1;
                    
                }

            };




            somaIdade = somaIdade + idade;
            porcentagemF = qtdF*100 / qtd; 


            printf("Deseja informar os dados do proximo (1/Sim 2/Nao)? ");
			scanf("%i", &resposta);
        } while (resposta == 1);
        printf("O nome informados foram: %s", Alunos[qtd].nome);
        printf("\n A soma das %i idades igual a %0.0f", qtd, somaIdade);
		printf("\n A media das %i idades igual a %.2f", qtd, (somaIdade / qtd));
		printf("\n O aluno com menor idade tem %i anos", idadeMenor);
		printf("\n O aluno com maior idade tem %i anos", idadeMaior);
        printf("\n Dos alunos informados %i. porcento sao mulheres", porcentagemF);
       
        
    }else
        printf("\n***************************** Muito Obrigado e ate a proxima!!!*****************************");

}