#include <iostream>

using namespace std;
int liczba;
int main()
{
    cout << "Podaj liczbe calkowita: " << endl;
    cin >> liczba;
    if (liczba >0){
        cout << "Liczba " << liczba << " jest dodatnia"<<endl;
    }
     if (liczba <0){
        cout << "Liczba " << liczba << " jest ujemna"<<endl;
    }
     if (liczba ==0){
        cout << "Podana liczba to 0"<<endl;
    }




    return 0;
}
