#include <iostream>

using namespace std;

int main(){

    char gabarito[10], prova1[10], prova2[10];

    int tam = 10, acertosUM = 0, acertosDOIS = 0;

    for (int i = 0; i < tam; i++)
    {
        cin >> gabarito[i];
    }

    for (int i = 0; i < tam; i++)
    {
        cin >> prova1[i];

        if(prova1[i] == gabarito[i]){

            acertosUM++;
        }
    }

    for (int i = 0; i < tam; i++)
    {
        cin >> prova2[i];

        if(prova2[i] == gabarito[i]){

            acertosDOIS++;
        }
    }
    if (acertosUM >= 6)
    {
        cout << acertosUM << endl << "APROVADO" << endl;
    } else {
        cout << acertosUM << endl << "REPROVADO" << endl;
    }

    if (acertosDOIS >= 6)
    {
        cout << acertosDOIS << endl << "APROVADO";
    } else {
        cout << acertosDOIS << endl << "REPROVADO";
    }
    

}