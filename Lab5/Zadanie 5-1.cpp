#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n = 0;
    int number = 0;
    vector<int> vec;

    cout << "Podaj rozmiar wektora: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Podaj " << (i+1) << " liczbe: ";
        cin >> number;
        vec.push_back(number);
    }

    int maxNum = vec[0];
    int maxIndex = 0;

    for (int i = 0; i < vec.size(); i++) {
        if (maxNum < vec[i]) {
            maxNum = vec[i];
            maxIndex = i;
        }
    }

    cout << "Znalezione maximum to: " << maxNum << ", znajduje sie pod indeksem: " << maxIndex+1<< endl;

    return 0;
}
