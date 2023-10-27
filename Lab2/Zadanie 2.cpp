#include <iostream>

using namespace std;

int main()
{
    int a = 0;
    int b = 0;

    cout<<"Podaj liczbe a: ";
    cin >> a;
    cout << "Podaj liczbe b: ";
    cin >> b;

    cout << "Pobrano liczby a == " << a << " oraz b == " << b << endl << endl;

    cout << "Wiersz o dlugosci a:" << endl;
    for (int i = 0; i < a; i++) {
        cout << "*";
    }

    cout << "\n\nKolumna o dlugosci b:" << endl;
    for (int i = 0; i < b; i++) {
        cout << "*" << endl;
    }

    cout << "\n\nProstokat gwiazdek o wymiarach 'a' na 'b':" << endl;
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            cout << "*";
        }
        cout << endl;
    }

    cout << "\n\nObwod prostokatu o wymiarach 'a' na 'b':" << endl;
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            if (i == 0 || j == 0 || j == b - 1 || i == a - 1) {
                cout << "*";
            }
            else {
                cout << " ";
            }
        }
        cout << endl;
    }

    cout << "\n\nTrojkat prostokatny rownoramienny z katem prostym w lewym dolnym rogu:" << endl;
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < a; j++) {
            if (j <= i) {
                cout << "*";
            }
            else {
                cout << " ";
            }
        }
        cout << endl;
    }

    cout << "\n\nTrojkat prostokatny rownoramienny z katem prostym w prawym gornym rogu:" << endl;
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < a; j++) {
            if (i <= j) {
                cout << "*";
            }
            else {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
