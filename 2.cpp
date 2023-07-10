#include <iostream>
#include <vector>

using namespace std;

int main(){

    int maior2, maior3;
    int vetorGeral[10];

    vector <int> vetor2;
    vector <int> vetor3;


    for(int i = 0; i < 10; i++){

        cin >> vetorGeral[i];

        if (vetorGeral[i] % 2 == 0)
        {
            vetor2.push_back(vetorGeral[i]);
            maior2 = vetor2[0];
            if (vetorGeral[i] > maior2)
            {
                maior2 = vetorGeral[i];
            }
            
        }
        if (vetorGeral[i] % 3 == 0)
        {
            vetor3.push_back(vetorGeral[i]);
            maior3 = vetor3[0];
            if (vetorGeral[i] > maior3)
            {
                maior3 = vetorGeral[i];
            }
            
        }
        
    }
    for (int i = 0; i < vetor2.size(); i++)
    {
        cout << vetor2[i] << " " ;
    }

    cout << endl << maior2 << endl;

    for (int i = 0; i < vetor3.size(); i++)
    {
        cout << vetor3[i] << " ";
    }
    
    cout << endl << maior3;

}