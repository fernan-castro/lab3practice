#include <iostream>

using namespace std;

int main() {
    int grade;

    while (grade > -1) {
        cout << "Enter your grade: ";
        cin >> grade;

        if (grade >= 90 && grade <= 100) {
            cout << "A\n";
        }
        else if (grade >= 80 && grade <= 89) {
            cout << "B\n";
        }
        else if (grade >= 70 && grade <= 79) {
            cout << "C\n";
        }
        else if (grade >= 60 && grade <= 69) {
            cout << "D\n";
        }
        else {
            cout << "F\n";
        }
    }
}