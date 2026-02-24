#include <iostream>
#include <string>
using namespace std;

int main () {
    int studentID;
    string studentName;
    float gpa;
    char grade;
    bool isEnrolled = true;

    cout << "Enter Student ID: ";
    cin >> studentID;

    cout << "Enter Student Name: ";
    cin >> studentName;

    cout << "Enter GPA: ";
    cin >> gpa;

    cout << "Enter Grade: ";
    cin >> grade;

    cout << "\n--- Student Information ---" << endl ;
    cout << "Student ID: " << studentID << endl ;
    cout << "Student Name: " << studentName << endl ;
    cout << "GPA: " << gpa << endl ;
    cout << "Grade: " << grade << endl ;
    cout << "Is Enrolled: " << isEnrolled << endl ;

    return 0;
}
