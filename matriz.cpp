#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>

using namespace std;

int main(){

//criando matriz
    int matriz [2][2], i, j;
/*
//preenchendo a matriz
    matriz [0][0] = 2;
    matriz [0][1] = 5;
    matriz [1][0] = 8;
    matriz [1][1] = 1;
    cout << "Matriz:\n";
//imprimir matriz
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
//verificando os indices
//          cout << "\ni = " << i << "j = " << j;
        cout << matriz[i][j] << " ";
        }
        cout << "\n";
    }
*/
//lendo valores
    cout << "Digite 4 numeros:\n";
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
//verificando os indices
//          cout << "\ni = " << i << "j = " << j;
        cin >> matriz[i][j];
        }
    }
//informando ao usuario o que será feito com os dados
    cout << "A matriz com os numeros digitados e:\n";
//imprimindo os valores digitados pelo usuario
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
        cout << matriz[i][j] << " ";
        }
        cout << "\n";
}
}
