#include <iostream>
#include <string>

using namespace std;

int idade, idadeMaior, idadeMenor, qtd, resposta, escolha, mMaior, mMenor, fMaior, fMenor, alunos[100];
float somaIdade, somaM, somaF;
char genero;
string nome;
//void imprimirOrdenado;

int main(){

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
            scanf("%s", nome.c_str());
            do{
                printf("Agora me informe a idade %i. aluno(a): ", qtd);
                scanf("%i", &idade);
            } while (idade > 120 | idade < 1);

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
        printf("O os nomes informados foram: %s", nome.c_str());
        printf("\n A soma das %i idades igual a %0.0f", qtd, somaIdade);
		printf("\n A media das %i idades igual a %.2f", qtd, (somaIdade / qtd));
		printf("\n O aluno com menor idade tem %i anos", idadeMenor);
		printf("\n O aluno com maior idade tem %i anos", idadeMaior);
        printf("\n A soma das %i idades do sexo M sao igual a %0.0f", qtd, somaM);
        printf("\n A soma das %i idades do sexo F sao igual a %0.0f", qtd, somaF);
        
    }else
        printf("\n***************************** Muito Obrigado e ate a proxima!!!*****************************");

}