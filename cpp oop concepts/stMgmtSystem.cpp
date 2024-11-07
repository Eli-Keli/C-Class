/*
Author: Eli Keli
Date: October 31
Description: Student Management System Excercise
Registration Number: BSE-05-0238/2023
*/
#include <iostream>
using namespace std;

class Person {
    protected:
        string name;
    
    public:
        void setName(string n) {
            this->name = n;
        }

        string getName() {
            return name;
        }
};

class Student : public Person {
    private:
        int studentID;
    
    public:
        Student(string name, int id) {
            this->name = name;
            this->studentID = id;
        }

        int getStudentID() {
            return studentID;
        }
};

class GraduateStudent : public Student {
    private:
        string researchTopic;
    
    public:
        GraduateStudent(string name, int id, string topic) : Student(name, id) {
            this->researchTopic = topic;
        }

        string getResearchTopic() {
            return researchTopic;
        }
};


int main() {
    Student s1("John", 1001);
    GraduateStudent gs1("Alice", 2001, "Artificial Intelligence");

    cout << "Student Name: " << s1.getName() << endl;
    cout << "Student ID: " << s1.getStudentID() << endl;

    cout << "Graduate Student Name: " << gs1.getName() << endl;
    cout << "Graduate Student ID: " << gs1.getStudentID() << endl;
    cout << "Research Topic: " << gs1.getResearchTopic() << endl;

    return 0;
}