#include <iostream>
using namespace std;

int main(){

    int vetor[15], maior = vetor[0];

    for (int i = 0; i < 15; i++)
    {
        cin >> vetor[i];
        if(vetor[i] > maior)
        {
            maior = vetor[i];
        }
    }

    for (int i = 0; i < 15; i++)
    {
        vetor[i] = vetor[i]/maior;
    }   
    
    for (int i = 0; i < 15; i++)
    {
        cout << vetor[i] << " ";
    }   


}