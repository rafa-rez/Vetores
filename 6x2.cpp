#include <iostream>

using namespace std;

int main(){

    // 3 vetores - 3 tamanhos de vetores

    int tamanhoA, tamanhoB;

    cin >> tamanhoA;

    int vetorA[tamanhoA];

    for(int i = 0; i < tamanhoA; i++)
    {
        cin >> vetorA[i];
    }

    cin >> tamanhoB;

    int vetorB[tamanhoB];

    for (int i = 0; i < tamanhoB; i++)
    {
        cin >> vetorB[i];
    }

    // vetores declarados, agora juntar eles.

    int tamanhoC = tamanhoA + tamanhoB;

    int vetorC[tamanhoC];

    for (int i = 0; i < tamanhoC; i++)
    {
        if(i % 2 == 0 or i == 0)
        {
            vetorC[i] = vetorA[i];
        } else 
        {
            vetorC[i] = vetorB[i];
        }
    }
    
    for (int i = 0; i < tamanhoC; i++)
    {
        cout << vetorC[i] << " ";
    }
    
}