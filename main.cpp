#include <iostream>
using namespace std;

int main() {
    int n1, n2, suma = 0, resta = 0, mult = 0, div = 0;

    cout<<"Digite un numero: ";cin>>n1;
    cout<<"Digite otro numero: ";cin>>n2;

    suma = n1 + n2;
    resta = n1 - n2;
    mult = n1 * n2;
    div = n1 / n2;

    cout<<"\n\nLa suma es: "<<suma;
    cout<<"\nLa resta es: "<<resta;
    cout<<"\nLa multiplicacion es: "<<mult;
    cout<<"\nLa division es: "<<div;

    return 0;
}
