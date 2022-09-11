#include <iostream>
#include <string>

using namespace std;

int idade, idadeMaior, idadeMenor, qtd, resposta, escolha, mMaior, mMenor, fMaior, fMenor, alunos[100];
float somaIdade, somaM, somaF;
string nome;
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
    qtd = 0;
    somaIdade = 0;
    printf("\n*****************************Ola, Seja Bem-vindo*****************************\n");
	printf("\nPreciso que me informe alguns dados");
	printf("\nDeseja comecar?(1-Sim, 2-Nao) : ");
    scanf("%i", &escolha);

    if (escolha == 1){
        do{
            qtd= qtd + 1;
            printf("Ok, Me informe o nome do %i. aluno(a): ", qtd);
            scanf("%s", &Alunos[qtd].nome);
            do{
                printf("Agora me informe a idade de %s: ", Alunos[qtd].nome);
                scanf("%i", &Alunos[qtd].idade);
            } while (Alunos[qtd].idade > 120 | Alunos[qtd].idade < 1);
             
            do{
                printf("Perfeito, agora preciso que me informe  o genero de %s [M-F]: ", Alunos[qtd].nome);
                scanf("%c", &Alunos[qtd].genero);
            }while (Alunos[qtd].genero != 'M' &
                    Alunos[qtd].genero != 'm' &
                    Alunos[qtd].genero != 'F' &
                    Alunos[qtd].genero != 'f' );
            
            if(qtd == 1){
                idadeMenor = idade;
                idadeMaior = idade;
                mMaior = idade;
                mMenor = idade;
                fMaior = idade;
                fMenor = idade;
            }else if(idadeMaior < idade){
                idadeMaior = idade;
                mMaior = idade;
                fMaior = idade;
            }else if(idadeMenor > idade){
                idadeMenor = idade;  
                mMenor = idade;
                fMenor = idade;
            }
            somaIdade = somaIdade + idade;
            somaF = somaF  + idade;
            somaM = somaM  + idade;        

           

            printf("Deseja informar os dados do proximo (1/Sim 2/Nao)? ");
			scanf("%i", &resposta);
        } while (resposta == 1);
        printf("O os nomes informados foram: %s", Alunos[qtd].nome);
        printf("\nO genero informado foi: %c", Alunos[qtd].genero);
        printf("\n A soma das %i idades igual a %0.0f", qtd, somaIdade);
		printf("\n A media das %i idades igual a %.2f", qtd, (somaIdade / qtd));
		printf("\n O aluno com menor idade tem %i anos", idadeMenor);
		printf("\n O aluno com maior idade tem %i anos", idadeMaior);
        printf("\n A soma das %i idades do sexo M sao igual a %0.0f", qtd, somaM);
        printf("\n A soma das %i idades do sexo F sao igual a %0.0f", qtd, somaF);
        
    }else
        printf("\n***************************** Muito Obrigado e ate a proxima!!!*****************************");

}