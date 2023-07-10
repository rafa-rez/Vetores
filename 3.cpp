#include <iostream>

using namespace std;

int main (){

    float a, b, c;

    cin >> a >> b >> c;

    a = a*2;
    b = b*3;
    c = c*5;

    float media = (a+b+c)/10.0;

    cout << media << endl;

    if(media > 8.00 and media < 10.00){
        cout << "A";
    }
    if(media > 7.00 and media < 8.00){
        cout << "B";
    }
    if(media > 6.00 and media < 7.00){
        cout << "C";
    }
    if(media > 5.00 and media < 6.00){
        cout << "D";
    }
    if(media > 0.00 and media < 5.00){
        cout << "E";
    }
}