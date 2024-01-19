#include <iostream>
#include <vector>

using namespace std;

struct Student {
    string name;
    string surname;
    double indexNumber;
};

void sortMethod(vector<Student>& students)
{
    for (int i = 0; i < students.size() - 1; i++)
        for (int j = 0; j < students.size() - i - 1; j++)
            if (students[j].indexNumber > students[j + 1].indexNumber) {
                Student temp = students[j+1];
                students[j+1] = students[j];
                students[j] = temp;
            }
}

int main()
{
    vector<Student> students = {{"Leo", "Kowal", 72165},
                                {"Maciej", "Demp", 783},
                                {"Alicja", "Kolecka", 260000},
                                {"Katrzyna", "Szczaw", 15}
    };

    cout << "Przed posortowaniem: " << endl;
    for (int i = 0; i < students.size(); i++) {
        cout << students[i].indexNumber << " " << students[i].name << " " << students[i].surname << endl;
    }

    sortMethod(students);

    cout << "\nPo posortowaniu: " << endl;
    for (int i = 0; i < students.size(); i++) {
        cout << students[i].indexNumber << " " << students[i].name << " " << students[i].surname << endl;
    }

    return 0;
}

