#include <iostream>

using namespace std;

int main(){

    float tamanho, cont1 = 0, cont2 = 0, cont3 = 0, cont4 = 0, cont5 = 0;

    cin >> tamanho;
    int vetor[int (tamanho)];

    for(int i = 0; i < tamanho; i ++)
    {
        cin >> vetor[i];

        if (vetor[i] == 1)
        {
            cont1++;
        }
        if (vetor[i] == 2)
        {
            cont2++;
        }
        if (vetor[i] == 3)
        {
            cont3++;
        }
        if (vetor[i] == 4)
        {
            cont4++;
        }
        if (vetor[i] == 5)
        {
            cont5++;
        }
        
    }

    
        cout << "5: " << cont5/tamanho << endl;
        cout << "4: " << cont4/tamanho << endl;
        cout << "3: " << cont3/tamanho << endl;
        cout << "2: " << cont2/tamanho << endl;
        cout << "1: " << cont1/tamanho << endl;

}