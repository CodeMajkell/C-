#include <iostream>

using namespace std;

int main()
{
    int n = 0;

    cout << "Podaj rozmiar tablicy: ";
    cin >> n;

    int* arr = new int[n];

    for (int i = 0; i < n; i++) {
        cout << "Podaj " << (i+1) << " liczbe: ";
        cin >> arr[i];
    }

    int maxNum = arr[0];

    for (int i = 1; i < n; i++) {
        if (maxNum < arr[i]) {
            maxNum = arr[i];
        }
    }

    cout << "Znalezione maximum to: " << maxNum << endl;

    delete[] arr;
    return 0;
}
