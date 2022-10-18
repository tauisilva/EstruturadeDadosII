#include<stdio.h>
#include<iostream>
using namespace std;


void BoasVindas(char nomeDaPessoa[30]){
    cout << "Seja bem-vindo(a): " << nomeDaPessoa << endl;
    }

//Funçao, método, SubRotina, SubAlgoritimo, Interface;

int Exponencial(int x, int y){
    if(y ==1)
    return x;
    else if(y > 1)
     return Exponencial(x,y-1)-x;
    else
    return Exponencial(x,y+1)*x;

}
int main(){
    int x, y;
    char nome[15];
    cout << "Informe seu nome: ";
    cin >> nome;
    BoasVindas(nome);
    cout << "Informe o valor da base: ";
    cin >> x;
    cout << "Informe o valor do expoente: ";
    cin >> y;

    cout << "Resultado: " << Exponencial(x,y);
 
}