#include <iostream>

using namespace std;

int main()
{
    int n = 0;
    int totalSum = 0;

    cout << "Podaj n: ";
    cin >> n;

    int* results = new int[n];

    for (int i = 1; i <= n; i++) {
        int sum = 0;
        for (int j = 1; j <= i; j++) {
            if (i == j) {
                cout << j;
            }
            else {
                cout << j << " + ";
            }
            sum += j;
        }
        results[i-1] = sum;
        totalSum += sum;
        cout << " = " << sum << endl;
    }

    cout << "\nSuma szeregu: ";
    for (int i = 0; i < n; i++) {
        if (i == n - 1) {
            cout << results[i] << " = ";
        }
        else {
           cout << results[i] << " + ";
        }
    }

    cout << totalSum;

    delete[] results;

    return 0;
}
