#include <iostream>
#include <string>
using namespace std;

class Student {
    string name;
    int regno;
    float mark1, mark2, mark3, average;
    char grade;

public:
    void input() {
        cout << "ENTER THE STUDENT NAME => ";
        cin >> name;
        cout << "ENTER THE REGISTER NUMBER => ";
        cin >> regno;
        cout << "MARK 1 => ";
        cin >> mark1;
        cout << "MARK 2 => ";
        cin >> mark2;
        cout << "MARK 3 => ";
        cin >> mark3;
    }

    void calculate() {
        average = (mark1 + mark2 + mark3) / 3;
        if (average > 90)
            grade = 'S';
        else if (average > 80)
            grade = 'A';
        else if (average > 70)
            grade = 'C';
        else if (average > 60)
            grade = 'D';
        else if (average > 50)
            grade = 'E';
        else
            grade = 'F';
    }

    void show() {
        cout << "AVERAGE SCORE IS => " << average << endl;
        cout << grade << " GRADE" << endl;
    }
};

int main() {
    Student student;
    student.input();
    student.calculate();
    student.show();
    return 0;
}
