#include <iostream>

using namespace std;

int main()
{
    int n = 0;
    int amount = 0;

    cout << "Podaj liczbe: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        if (i % 5 == 0 && i % 3 != 0) {
            amount++;
        }
    }

    cout << "Do liczby " << n << " jest " << amount << " liczb podzielnych przez 5 jednoczesnie niepodzielnych przez 3";

    return 0;
}
