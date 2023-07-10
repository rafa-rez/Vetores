#include <iostream>

using namespace std;

int main(){

    int tamtoma, tambota;

    // declarando o que vai ser multiplicado
    cin >> tamtoma;
    int toma[tamtoma];

    for(int i = 0; i < tamtoma; i++)
    {
     cin >> toma[i];   
    }

    // declarando o vetor dos índices
    cin >> tambota;
    int bota[tambota];

    for(int i = 0; i < tambota; i++)
    {
        cin >> bota[i];
    }

    // todos os valores ja declarados, agora fica difícil.

    for (int i = 0; i < tambota; i++)
    {
        int indice;
        indice = bota[i];

        toma[indice] = toma[indice]*2;
    }
    

    for (int i = 0; i < tamtoma; i++)
    {
        cout << toma[i] << " ";
    }
    

}