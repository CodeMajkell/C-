#include <iostream>

using namespace std;

int main()
{
    int n = 0;

    cout << "Podaj liczbe 1-12: ";
    cin >> n;

    switch(n) {
        case 1:
            cout << "Styczen" << endl;
            cout << "31 dni" << endl;
            cout << "Jest pochmurnie w tym miesiacu" << endl;
            break;
        case 2:
            cout << "Luty" << endl;
            cout << "28 dni" << endl;
            cout << "Jest pochmurnie w tym miesiacu" << endl;
            break;
        case 3:
            cout << "Marzec" << endl;
            cout << "31 dni" << endl;
            cout << "Jest pochmurnie w tym miesiacu" << endl;
            break;
        case 4:
            cout << "Kwiecien" << endl;
            cout << "30 dni" << endl;
            cout << "Jest slonecznie w tym miesiacu" << endl;
            break;
        case 5:
            cout << "Maj" << endl;
            cout << "31 dni" << endl;
            cout << "Jest slonecznie w tym miesiacu" << endl;
            break;
        case 6:
            cout << "Czerwiec" << endl;
            cout << "30 dni" << endl;
            cout << "Jest slonecznie w tym miesiacu" << endl;
            break;
        case 7:
            cout << "Lipiec" << endl;
            cout << "31 dni" << endl;
            cout << "Jest slonecznie w tym miesiacu" << endl;
            break;
        case 8:
            cout << "Sierpien" << endl;
            cout << "31 dni" << endl;
            cout << "Jest slonecznie w tym miesiacu" << endl;
            break;
        case 9:
            cout << "Wrzesien" << endl;
            cout << "30 dni" << endl;
            cout << "Jest slonecznie w tym miesiacu" << endl;
            break;
        case 10:
            cout << "Padziernik" << endl;
            cout << "31 dni" << endl;
            cout << "Jest pochmurnie w tym miesiacu" << endl;
            break;
        case 11:
            cout << "Listopad" << endl;
            cout << "30 dni" << endl;
            cout << "Jest pochmurnie w tym miesiacu" << endl;
            break;
        case 12:
            cout << "Grudzien" << endl;
            cout << "31 dni" << endl;
            cout << "Jest pochmurnie w tym miesiacu" << endl;
            break;
        default:
            cout << "Liczba spoza przedzialu!" << endl;
            break;
    }

    return 0;
}
