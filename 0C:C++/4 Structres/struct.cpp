#include <iostream>
#include <string>
using namespace std;

// Defining a structure
struct Student {
    int id;           // Member variable for Student ID
    string name;      // Member variable for Student Name
    float marks;      // Member variable for Marks
};

int main() {
    // Create an instance of the structure
    Student student1;

    // Assign values to the structure members
    student1.id = 101;
    student1.name = "Krishna Kamal";
    student1.marks = 89.5;

    // Print the structure data
    cout << "Student Details:" << endl;
    cout << "ID: " << student1.id << endl;
    cout << "Name: " << student1.name << endl;
    cout << "Marks: " << student1.marks << endl;

    return 0;
}
