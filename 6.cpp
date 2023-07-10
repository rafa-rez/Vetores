#include <iostream>
#include <algorithm>

using namespace std;

int main(){

    // declaração das variáveis
    int tamA, tamB, contador = 0;

    cin >> tamA;
    int A[tamA];

    // declarar valores de A
    for (int i = 0; i < tamA; i++)
    {
        cin >> A[i];
    }

    // Declarando afins do vetor B
    cin >> tamB;
    int B[tamB];

    // declarar valores de B
    for(int i = 0; i < tamB; i++)
    {
        cin >> B[i];
    }
    
    // comparar se os vetores tem numeros iguais e saber quantos são.
    for(int i = 0; i < tamA; i++)
    {
        int j = 0;
            if (A[i] != B[j]) 
            {
                j++;
            } else 
            {
                contador++;
            }
    }

    // inferno
    int tamC = (tamA+tamB)-contador;
    int C[tamC];

    for(int k = 0; k < tamC; k++)
    {
        for(int i = 0; i < tamA; i++)
        {
            for(int j = 0; j < tamB; j++)
            {
                if(A[i] != B[j])
                {
                    if(A[i] < B[j])
                    {
                        C[k] = A[i];
                        
                    } else if (A[i] > B[j])
                    {
                        C[k] = B[j];
                        
                    }
                } else if (A[i] == B[j])
                    {
                        C[k] = A[i];
                        
                    }
            }
        }        
    }

    
    for (int i = 0; i < tamC; i++)
    {
        cout << C[i] << " ";
    }
    cout << tamC;
    
}