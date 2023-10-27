#include <iostream>


using namespace std;
int liczba;
int main()

{

    cout << "Podaj liczbe calkowita:" << endl;
    cin >> liczba;


    if ((liczba %2==0)&&(liczba!=0))
        {
        cout << "Liczba jest parzysta" << endl;
    }
    if ((liczba %2==1)||(liczba%2==-1)) {
        cout << "liczba nie jest parzysta" <<endl;
    }
    if (liczba==0) {
        cout <<"Podana liczba to 0"<<endl;
    }


    return 0;
}
