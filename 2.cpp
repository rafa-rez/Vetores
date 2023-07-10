#include <iostream>

using namespace std;

int main () {

    double A, B;
    
    cin >> A >> B;
    int x;

    cin >> x;

    if(x > 4 or x < 1 ){

        cout << "ERRO";

    } else if (x == 1)
    {
        cout << (A + B)/2.0;
    } else if (x == 2)
    {
        if( A > B){
            cout << A - B;
        } else {
            cout << B - A;
        }      
    } else if (x == 3)
    {
        cout << A*B;
    } else if (x == 4)
    {
        if(B == 0){
            cout << "ERRO";
        } else {
            cout << A/B;
        }
    }

}