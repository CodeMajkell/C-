#include <iostream>

using namespace std;

int main()
{
    int n = 0;
    string word = "";
    string resultWord = "";

    cout << "Podaj liczbe: ";
    cin >> n;
    cout << "Podaj napis: ";
    cin >> word;

    for (int i = 0; i < n; i++) {
        resultWord += word;
    }

    cout << "Wyraz po konkatenacji: " << resultWord;

    return 0;
}
