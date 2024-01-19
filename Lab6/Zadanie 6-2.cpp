#include <iostream>

using namespace std;

const int GRADES_AMOUNT = 4;
const int NUMBER_OF_STUDENTS = 6;

struct Student {
    string name;
    double grades[GRADES_AMOUNT]; // [0] -> informatyka, [1] -> matematyka, [2] -> biologia, [3] -> polski
};

int main()
{
    Student students[NUMBER_OF_STUDENTS];
    int n = 0;
    int studentIndex = 0;
    int gradeIndex = 0;

    for(int i = 0; i < NUMBER_OF_STUDENTS; i++){
        cout << "Podaj imie ucznia nr " << (i+1) << ": ";
        cin >> students[i].name;
        cout << "Podaj ocene z informatyki: ";
        cin >> students[i].grades[0];
        cout << "Podaj ocene z matematyki: ";
        cin >> students[i].grades[1];
        cout << "Podaj ocene z biologii: ";
        cin >> students[i].grades[2];
        cout << "Podaj ocene z jezyka polskiego: ";
        cin >> students[i].grades[3];
    }

    cout << "\n\nPodaj liczbe zapytan: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Podaj nr ucznia [1..6]: ";
        cin >> studentIndex;
        cout << "Podaj nr przedmiotu [0..3]: ";
        cin >> gradeIndex;
        cout << "Uczen: " << students[studentIndex-1].name << ", ocena z ";

        switch(gradeIndex) {
            case 0:
                cout << "informatyki";
                break;
            case 1:
                cout << "matematyki";
                break;
            case 2:
                cout << "biologii";
                break;
            case 3:
                cout << "jezyka polskiego";
                break;
            default:
                cout << "bledna kategoria oceny";
                break;
        }
        cout << ": " << students[studentIndex-1].grades[gradeIndex] << endl;
    }

    return 0;
}
