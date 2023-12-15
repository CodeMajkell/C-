#include <iostream>

using namespace std;

int main()
{
    int x = 0;
    int y = 0;

    cout << "Podaj rozmiar pierwszego wymiaru tablicy: ";
    cin >> x;
    cout << "Podaj rozmiar drugiego wymiaru tablicy: ";
    cin >> y;

    int** arr = new int*[x];

    for (int i = 0; i < x; i++) {
        arr[i] = new int[y];
        for (int j = 0; j < y; j++) {
            cout << "Podaj liczbe pod wspolrzedne " << i << ", " << j << ": ";
            cin >> arr[i][j];
        }
    }

    cout << "Tablica wejsciowa: " << endl;
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y/2; j++) {
            int temp = arr[i][y-1-j];
            arr[i][y-1-j] = arr[i][j];
            arr[i][j] = temp;
        }
    }

    cout << "\n\nTablica wyjsciowa: " << endl;
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < x; i++) {
        delete arr[i];
    }

    delete[] arr;
    return 0;
}
