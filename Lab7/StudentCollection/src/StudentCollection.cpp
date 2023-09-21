#include "StudentCollection.h"
#include<iostream>

using namespace std;

StudentCollection::StudentCollection():count(0)
{ }

double& StudentCollection::operator[](const string& name) {
    for (int i = 0; i < count; i++) {
        if (names[i] == name) {
            return grades[i];
        }
    }
    cout << "Student not found" << endl;
}

void StudentCollection::addStudent(const string& name, double grade) {
    if (count >= 10) {
        cout << "Max size reached." << endl;
        return;
    }
    names[count] = name;
    grades[count] = grade;
    count++;
}
