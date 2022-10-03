//Considerações a respeito das funções
//1- Uma função Possui 5 membros 
//      1_Tipo do Retorno na função(Float, int, void)
//      2_Nome da Função(Soma, Sub, Div);
//      3_Assinatura(float num, float num2);
//      4_Implementação(float resultado
//                       resultado = num+num2;)
//      5_Retorno da Função(return)
//2- Funções tipo VOID não retorna valor;
//3 - Nomes das funções seguem as 5 Regras de declaração das variaveis;
//4 - Assinaturas de funções permitem a definição de valores padrões(Default float num=0), POREM, todos as definições apos devera ter valores;
//5 - Funções implementadas apos o metodo principal (main), necessitam ser declaradas com o (cabeçalho= float Soma(float num, float num2))
//  antes do main, no qual passa a se chamar assinatura tbem;
//6 - Não é responsabilidade de uma função fazer coleta/apresentação de dados;
#include <iostream>
#include<stdio.h>
#include<C:\Users\tauis\Documents\Estrutura de Dados II\EstruturadeDadosII\funcoes.h>

using namespace std;

float num, num2;

int main(){
    cout << "Informe o Primeiro numero: ";
    cin >> num;
    cout << "Informe o Segundo numero: ";
    cin >> num2;

    cout << "As quatro operacoes aritmeticas com os numeros informados";
    cout << "\n Soma - > " << num << " + " << num2 << " = " << Soma(num, num2);
    cout << "\n Subtracao - > " << num << " - " << num2 << " = " << Sub(num, num2);
    cout << "\n Multiplicacao - > " << num << " * " << num2 << " = " << Produto(num,num2);
    cout <<"\n Divisao - > " << num << " / " << num2 << " = " << Divisao(num,num2);
    cout << "\nFatorial de - > " << num << " = " << Fato(num);
    cout << "\nExpoente de - > " << num << " elevado(com recursividade) " << " a " << num2 << " = "<< ExponencialComRecur(num,num2);
    cout << "\nExpoente de - > " << num << " elevado " << " ha " << num2 << " = "<< Expo(num,num2);
}

