//escreva um algoritmo que
//  1.Solicite ao usuario os dados para inicializar uma matriz de adjascencia 
//  2.Implemente uma função para imprimir a Matriz
//  3.Implemente uma função para:
//      3.1 Inserir valor na matriz
//      3.2 Alterar o valor na matriz

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int menu, tamanho, matriz[100] [100];

int MenuPrincipal(){
    //
    system("cls");
    printf("===================Matriz===================\n");
    printf("1: Inicializar a Matriz\n");
    printf("2: Imprimir a Matriz\n");
    printf("3: Inserir valor na Matriz\n");
    printf(".\n");
    printf("4:Sair\n");
    printf("============================================\n");
    printf("\nDigite a opcao desejada: ");
    scanf("%d",&menu);
    return(menu);
}

void CriarMatriz(int ordem){
    
}

void imprimirMatriz(){

}
void GravarValor(int linha, int coluna, int valor){

}

int main(){
    MenuPrincipal();
}