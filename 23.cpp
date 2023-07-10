#include <iostream>

using namespace std;

int main (){

    int tamanho, contador = 0;

    cin >> tamanho;

    int vetor[tamanho];

    for(int i = 0; i < tamanho; i++)
    {
        cin >> vetor[i];
    }

    for(int i = 0; i < tamanho; i++)
    {
        for(int j = i + 1; j < tamanho; j++)
        {
            if (vetor[i] == vetor[j])
            {
                contador++;
            }
            
        }
    }
    cout << tamanho - contador;

}