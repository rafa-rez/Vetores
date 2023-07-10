#include <iostream>

using namespace std;

int main(){

    int tamanho, tantos;

    cin >> tamanho;
    
    float vetor[tamanho], soma = 0.0;

    for (int i = 0; i < tamanho; i++)
    {
        cin >> vetor[i];
    }
    
    cin >> tantos;

    for (int i = 0; i < tantos; i++)
    {
        soma = soma + vetor[i];
    }
    
    cout << soma;

}