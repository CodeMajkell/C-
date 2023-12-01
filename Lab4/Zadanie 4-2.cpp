#include <iostream>

using namespace std;

int main()
{
    int n = 0;

    cout << "Podaj wielkosc tablicy: ";
    cin >> n;

    int* arr = new int[n];

    for (int i = 0; i < n; i++) {
        cout << "Podaj " << (i+1) << " liczbe: ";
        cin >> arr[i];
    }

    int number = arr[0];
    int maxOccurrencesNumber = arr[0];
    int maxOccurrencesAmount = 0;
    int currentOccurrences = 0;

    for (int i = 0; i < n; i++) {
        number = arr[i];
        currentOccurrences = 0;
        for (int j = 0; j < n; j++) {
            if (number == arr[j]) {
                currentOccurrences++;
            }
        }

        if (currentOccurrences > maxOccurrencesAmount) {
            maxOccurrencesAmount = currentOccurrences;
            maxOccurrencesNumber = number;
        }
    }

    cout << "\n\nNajczesciej wystepuje liczba " << maxOccurrencesNumber << ", w ilosci: " << maxOccurrencesAmount;

    delete[] arr;

    return 0;
}
