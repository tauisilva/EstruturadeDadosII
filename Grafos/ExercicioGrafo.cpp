//escreva um algoritmo que
//  1.Solicite ao usuario os dados para inicializar uma matriz de adjascencia 
//  2.Implemente uma função para imprimir a Matriz
//  3.Implemente uma função para:
//      3.1 Inserir valor na matriz
//      3.2 Alterar o valor na matriz

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int tamanho;
int Menu(){
    system("cls");
    printf("\n ===== Menu de Controle ===== ");
    printf("\n = 1: Inicializar a matriz   =");
    printf("\n = 2: Imprimir a matriz      =");
    printf("\n = 3: Inserir valor na matriz ");
    printf("\n = 4: Percorrer a matriz     =");
    printf("\n = 5: Identificar menor      =");
    printf("\n = 0: Sair do programa       =");
    printf("\n =============================");
    printf("\nDigite a opcao desejada: ");
    int resposta;
    scanf("%i", &resposta);
    return  resposta;
}

int main(){
    int resposta;
    do{
       resposta = Menu();
       if(resposta == 1){
        printf("Informe o tamanho do grafo: ");
        scanf("%i", &tamanho);
       }

    } while (resposta != 0);
   
}