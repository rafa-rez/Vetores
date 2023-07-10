#include <iostream>

using namespace std;

int main(){

    int tam, problema;

    cin >> tam;
    if (tam >= 3)
    {
            int vetor[tam];

        for (int i = 0; i < tam; i ++){

            cin >> vetor[i];
        }

        cin >> problema;


        bool encontrouSoma = false;
        int indice1, indice2, indice3;

        for ( int i = 0; i < tam - 2; i++)
        {
            for (int j = i + 1; i < tam - 1; j++)
            {
                for (int k = j + 1; i < tam; k++)
                {
                    if (vetor[i] + vetor[j] + vetor[k] == problema)
                    {
                        indice1 = i;
                        indice2 = j;
                        indice3 = k;

                        encontrouSoma = true;
                    }
                    
                }
                
            }
            
        }
        if(encontrouSoma == true){
            cout << vetor[indice1] << " " << vetor[indice2] << " " << vetor[indice3];
        } else {
            cout << "-1";
        }
        
    }
    

}