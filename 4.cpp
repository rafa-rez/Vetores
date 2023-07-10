#include <iostream>

using namespace std;

int main(){

    int idade;
    float peso;

    cin >> idade >> peso;

    if(idade < 20){
        if(peso > 90)
        {
            cout << "7";
        } else if (peso >= 60 and peso <= 90)
        {
            cout << "8";
        }else if (peso > 60)
        {
            cout << "9";
        }
    }
    if(idade >= 20 and idade <= 50){
        if(peso > 90)
        {
            cout << "4";
        } else if (peso >= 60 and peso <= 90)
        {
            cout << "5";
        }else if (peso > 60)
        {
            cout << "6";
        }
    }
    if(idade > 50){
        if(peso > 90)
        {
            cout << "1";
        } else if (peso >= 60 and peso <= 90)
        {
            cout << "2";
        }else if (peso > 60)
        {
            cout << "3";
        }
    }

}