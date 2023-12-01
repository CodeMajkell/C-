#include <iostream>

const int ARR_SIZE = 10;

using namespace std;

int main()
{
    int arr[ARR_SIZE][ARR_SIZE];

    for (int i = 0; i < ARR_SIZE; i++) {
        for (int j = 0; j < ARR_SIZE; j++) {
            if (j == 0) {
                arr[i][0] = i;
            }
            else if (j == 1) {
                arr[i][1] = arr[i][0] + arr[i][0];
            }
            else if (j == 2) {
                arr[i][2] = arr[i][0] * arr[i][0];
            }
            else if (j == 3) {
                arr[i][3] = i + j;
            }
            else if (j == 4) {
                arr[i][4] = i - j;
            }
            else {
                arr[i][j] = 0;
            }
        }
    }

    cout << "Tablica:" << endl;
    for (int i = 0; i < ARR_SIZE; i++) {
        for (int j = 0; j < ARR_SIZE; j++) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
