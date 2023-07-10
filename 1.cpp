#include <iostream>

using namespace std;

int main (){

    int n, contador = 0;

    cin >> n;

    int vetor[n];

    for(int i = 0; i < n; i++){

        cin >> vetor[i];
        
    }
        
    for(int j = 0; j < n; j++){

        vetor[j] = vetor[j] - 1;
        
    }
        
    
    cout << contador;
    return 0;
}