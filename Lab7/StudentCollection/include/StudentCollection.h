#ifndef STUDENT_COLLECTION_H
#define STUDENT_COLLECTION_H

#include <string>
using namespace std;
class StudentCollection {
public:
    StudentCollection();
    double& operator[](const string& name);
    void addStudent(const string& name, double grade);

private:
    string names[10];
    double grades[10];
    int count;
};

#endif
