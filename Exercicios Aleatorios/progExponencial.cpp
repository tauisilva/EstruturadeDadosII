#include<stdio.h>
#include<iostream>
using namespace std;


void BoasVindas(char nomeDaPessoa[30]){
    cout << "Seja bem-vindo(a): " << nomeDaPessoa << endl;
    }

//Funçao, método, SubRotina, SubAlgoritimo, Interface;

float Exponencial(float base, float expo){
    float resultado = 1; //1 é o fator neutro da multiplicação, todo numero elevado a 0 é 1;

    for(int i=1; i<=expo; i++){
        resultado *= base;
    }
    return(resultado);
}
int main(){
    float base, exp;
    char nome[15];
    cout << "Informe seu nome: ";
    cin >> nome;
    BoasVindas(nome);
    cout << "Informe o valor da base: ";
    cin >> base;
    cout << "Informe o valor do expoente: ";
    cin >> exp;

    cout << "Resultado: " << Exponencial(base,exp);

}