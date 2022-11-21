#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
//variaveis
int tamanho;
int opcao,lin,col,vlr,confirma;
int matriz[100][100];
//variaveis

//ASSINATURAS
int Menu();
void LimpMatriz();
void ImprimirMatriz();
void GravarValor(int A,int B,int C);
void Dados();
void ProcurarMatriz();
void MenorVlr();
//ASSINATURAS

int main(){
    int iniciar;
    printf("Ola, Seja Bem-vindo ao programa de Matriz!");
    printf("\nDeseja acessar o menu de opcoes?");
    printf("\n1 - Sim | 2 - Nao desejo Sair");
    printf("\nDigite a opcao desejada: ");
    scanf("%i",&iniciar);
    if(iniciar== 1){
        Dados();
    }else{
        printf("\nOk, Obrigado e ate a proxima...");
    }    
}

//FUNÇÕES
int Menu(){
    system("cls");
    printf("\n====== Menu de Controle ====== ");
    printf("\n= 1: Inicializar a matriz     =");
    printf("\n= 2: Imprimir a matriz        =");
    printf("\n= 3: Inserir valor na matriz  =");
    printf("\n= 4: Percorrer a matriz       =");
    printf("\n= 5: Identificar menor        =");
    printf("\n= 0: Sair do programa         =");
    printf("\n===============================");
    printf("\nDigite a opcao desejada: ");
    int resposta;
    scanf("%i", &resposta);
    return  resposta;
}
void Dados(){
    lin = -1;
    col = -1;
    do{
        opcao=Menu();
        if(opcao==1){
            printf("Informe o tamanho do grafo: ");
            scanf("%d",&tamanho);
            LimpMatriz();
            printf("\nMatriz inicializada com sucesso (Tamanho %d)",tamanho);
            printf("\nPressione uma tecla para prosseguir...");
            getch();
        }else if(opcao==2){
            ImprimirMatriz();
        }else if(opcao==3){
            do{
                if ((lin==col) & (lin>0)){
                   printf("A linha e acoluna nao podem ter o mesmo valor!");
                }
                if(lin>tamanho){
                    printf("A linha informada esta fora da Matriz!");
                }
                if(col>tamanho){
                    printf("A coluna informada esta fora da Matriz!");
                }
                printf("\nInforme a posicao da linha: ");
                scanf("%i", &lin);
                printf("Informe a posicao da coluna: ");
                scanf("%i", &col);    

                if(matriz[lin][col] > 0){
                    printf("\nA posicao [%i][%i] ja contem um valor: %i!", lin,col, matriz[lin][col]);
                    printf("\nConfirma a sobreposicao?(1-S/2-N) ");
                    scanf("%s",&confirma);
                    if(confirma == 2){
                        break;
                    }
                }            
            } while ((lin == col) | (lin > tamanho) | (col > tamanho));   
            do{
                if(confirma == 'N' | confirma =='n'){
                        break;
                    }
                printf("Informe um valor(positivo) para a Aresta:  ");
                scanf("%i", &vlr);                
            }while(vlr<=0);    
            GravarValor(lin,col,vlr);
            lin= -1;
            col= -1;        
        }else if(opcao==4){
            ProcurarMatriz();
        }else if(opcao==5){
            MenorVlr();
        }
    }while(opcao !=0);
    printf("\nOk, Obrigado e ate a proxima...");
}
void LimpMatriz(){
    for(int linha=1; linha<=tamanho;linha++){
        for(int coluna=1; coluna<=tamanho;coluna++){
             matriz[linha][coluna]=0;
        }
    }
}

void ImprimirMatriz(){
    printf("\n");
	for(int linha = 1; linha <= tamanho; linha++){
		if(linha == 1){
			for(int coluna = 0; coluna <= tamanho; coluna++){
                if(coluna < 10){
		    		printf(" 0%d " , coluna);
                }else{
                    printf(" %d " , coluna);
                }		    			
            }		    		
		    	printf("\n");
		}
		if(linha < 10)
			printf(" 0%d " , linha);
		else
			printf(" %d " , linha);
			
	    for(int coluna = 1; coluna <= tamanho; coluna++){
	    	if (linha == coluna)
	    		printf(" XX ");
	    	else{
				if(vlr < 10)
					printf(" 0%d " , matriz[linha][coluna]);
				else
					printf(" %d " , matriz[linha][coluna]);	
			}
	    }
	    printf("\n");
	}
    printf("\n");
    printf("\nPressione uma tecla para prosseguir...");
    getch();
}

void GravarValor(int A,int B,int C){
    matriz[A][B] = C;
    printf("\nO valor %i foi gravado na posicao[%i,%i] da Matriz.", C,A,B);
    printf("\nPressione uma tecla para prosseguir...");
    getch();
}
void ProcurarMatriz(){
    printf("\nProcurar um Valor na Matriz");
    printf("\nInforme a posicao da linha: ");
    scanf("%i", &lin);
    printf("\nInforme a posicao da coluna: ");
    scanf("%i", &col);
    printf("\nA posicao informada [%i,%i] esta com o valor: %i", matriz[lin][col], vlr);
    // if ((lin==col) & (lin>0)){
    //     printf("\nA posicao informada e invalida [%i,%i]", matriz[lin][col]);
    // }else if(lin>tamanho){
    //     printf("\nA posicao informada e invalida [%i,%i]", matriz[lin][col]);
    // }else if(col>tamanho){
    //     printf("\nA posicao informada e invalida [%i,%i]", matriz[lin][col]);
    // }else{
    //     printf("\nA posicao informada [%i,%i] esta com o valor: %i", matriz[lin][col], vlr);
    // }
    getch();    
}

void MenorVlr(){
    printf("Em Breve...");
}

//FUNÇÕES
