#ifndef STUDENT_H
#define STUDENT_H


class student
{
    private:
        string studentName;
        string date;
        int ID;
        double cgpa;
    public:
        student();
        ~student();

        string GetstudentName() { return studentName; }
        void SetstudentName(string val) { studentName = val; }
        string Getdate() { return date; }
        void Setdate(string val) { date = val; }
        int GetID() { return ID; }
        void SetID(int val) { ID = val; }
        double Getcgpa() { return cgpa; }
        void Setcgpa(double val) { cgpa = val; }

    protected:


};

#endif // STUDENT_H
