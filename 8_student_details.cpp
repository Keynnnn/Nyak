#include <iostream>
using namespace std;

int main () {
    cout << "Welcome to Programming!" ;
    return 0;
    
}


#include <iostream>
using namespace std;

int main () {
    cout << "Hello, World!" << endl ;
    cout << "This is my first program." << endl ;
    cout << "Learning C++ is fun!" << endl ;

    return 0;
}

#include <iostream>
using namespace std;

int main () {
    cout << "Line 1\nLine 2\nLine 3" << endl ;
    cout << "Name: Lloyd" << endl ;
    cout << "Age: \t20" << endl ;
    cout << "She said, \"Hello!\"" << endl ;
    return 0;
}

#include <iostream>
using namespace std;

int main () {
    int age = 20;
    float height = 5.8;
    char grade = 'A';

    cout << "Age: " << age << endl ;
    cout << "Height: " << height << endl ;
    cout << "Grade: " << grade << endl ;

    return 0;
}

#include <iostream>
#include <string>
using namespace std;

int main () {
    string name = "Lloyd";
    string course = "Civil Engineering"; // BSCE
    int year = 2025;

    cout << "Name: " << name << endl ;
    cout << "Course: " << course << endl ;
    cout << "Year: " << year << endl ;
    return 0;
}

#include <iostream>
using namespace std;

int main () {
    string name;

    cout << "Enter your name: ";
    cin >> name;

    cout << "Hello, " << name << "!" << endl ;

    return 0;
}

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
