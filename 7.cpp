#include <iostream>
using namespace std;

int main () {
    string name;
    int age;
    char section;

    cout << "Enter your name: ";
    cin >> name;

    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter your section: ";
    cin >> section;

    cout << "\n--- Student Information ---" << endl ;
    cout << "Name: " << name << endl ;
    cout << "Age: " << age << endl ;
    cout << "Section: " << section << endl ;

    return 0;
}
