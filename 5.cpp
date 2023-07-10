#include <iostream>

using namespace std;

int main (){

    int tam, menor, indiceMenor, maior, indiceMaior;
    cin >> tam;
    
    int vetor[tam];

    for(int i = 0; i < tam; i++){
        
        cin >> vetor[i];
    }

    maior = vetor[0];
    indiceMaior = 0;

    menor = vetor[0];
    indiceMenor = 0;
    
    for(int i = 0; i < tam; i ++){

        if (vetor[i] < menor)
        {
            menor = vetor[i];
            indiceMenor = i;
        }

        if (vetor[i] > maior)
        {
            maior = vetor[i];
            indiceMaior = i;
        }
    }
    cout << maior << " " << menor << " " << indiceMaior << " " << indiceMenor;

    return 0;
}