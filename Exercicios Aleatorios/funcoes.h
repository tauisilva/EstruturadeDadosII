#include<iostream>
#include<stdio.h>
using namespace std;

float Soma(float num, float num2){
    float resultado;
    resultado = num + num2;
    return(resultado);
}

float Sub(float num, float num2){
    float resultado;
    resultado = num - num2;
    return(resultado);
}
float Produto(float num, float num2){
    float resultado;
    resultado = num * num2;
    return(resultado);
}
float Divisao(float num, float num2=1){
    float resultado;
    resultado = num / num2;
    if(num2 == 0){
        cout << "\n Nao pode dividir por zero!";
    }else{
        return(resultado);
   }   
}
float Expo(float num, float num2){//Sem recursividade
    float resultado = 1;
    if(num2 ==0){//regra matematica, todo numero elevado a 0 é igual ele mesmo
        return(1);
    }else{
        for(int i = 1; i <= num2; i++){
            resultado = resultado * num;
        }
    }
    return(resultado);
}
float ExponencialComRecur(float num, float num2){//Com recursividade
    if(num2 == 0){//regra matematica, todo numero elevado a 0 é igual ele mesmo
        return(1);
    }else if(num2 == 1){ //condiçao de parada da fução recursiva
        return(num);
    }else{
    return(num * ExponencialComRecur(num, num2-1));
    }
}

float Fato(float num){
    int resultado = num;
    int total =1;
    for(int i=2; i<=resultado; i++){
        total = total * i;
    }
    return(total);
}
