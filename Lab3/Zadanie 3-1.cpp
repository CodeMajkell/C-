#include<iostream>
#include<math.h>
#include<iomanip>

using namespace std;

int main()
{
    double y;
    double x;


    cout << "Podaj dwie liczby: " << endl;
    cin >> y >> x;
    cout.precision(2);
    cout<<fixed;
    cout << "Suma: " << y + x << endl;
    cout << "Roznica: " << y - x << endl;
    cout << "iloczyn: " << y + x << endl;
    cout << "iloraz: " << y / x << endl;
}
