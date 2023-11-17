#include <cmath>
#include <iostream>

using namespace std;

int main()
{
    double a = 0;
    double b = 0;
    double c = 0;
    double delta = 0;

    cout << "Funkcja kwadratowa ma postac: f(x) = ax^2 + bx + c" << endl << endl;

    cout<<"Podaj A: ";
    cin >> a;
    cout<<"Podaj B: ";
    cin >> b;
    cout<<"Podaj C: ";
    cin >> c;

    cout << "Wartosc podanej funkcji kwadratowej: f(x) = " << a << "x^2";
    if (b < 0) {
        cout << " " <<  b << "x";
    }
    else {
        cout << " + " << b << "x";
    }

    if (c < 0) {
        cout << " " << c << endl << endl;
    }
    else {
        cout << " + " << c << endl << endl;
    }

    delta = (b*b) - (4*a*c);

    if (delta < 0) {
        cout << "Rownanie kwadratowe nie posiada pierwiastkow" << endl;
    }
    else if (delta == 0) {
        cout << "Rownanie kwadratowe ma jeden pierwiastek: " << (-b/(2*a)) << endl;
    }
    else {
        double x1 = (-b - sqrt(delta)) / (2*a);
        double x2 = (-b + sqrt(delta)) / (2*a);
        cout << "Rownanie kwadratowe ma dwa pierwiastki: " << x1 << " i " << x2 << endl;
    }

    return 0;
}
