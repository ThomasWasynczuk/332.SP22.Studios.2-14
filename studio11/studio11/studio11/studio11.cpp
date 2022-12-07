// studio11.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


//#include <string>
#include <vector>
#include <algorithm>
#include <istream>
#include <fstream>
#include "Header.h"

using namespace std;




Student::Student() :name(""), id(0) {}
Student::Student(std::string s, int i) : name(s), id(i) {}

ostream& operator<<(ostream& os, const Student& s)
{
    os << s.getName() << ": " << s.getId();
    return os;
}
std::string Student::getName() const { return this->name; }
int Student::getId() const { return this->id; }
Student& Student::setName(std::string na) {
    this->name = na;
    return *this;
}
Student& Student::setID(int eyedee) {
    this->id = eyedee;
    return *this;
}
bool compareStudentID(Student a, Student b) {
    return a.getId() > b.getId();
}

int main()
{

    Student a = Student("al", 2273);
    Student b = Student("bo", 1738);
    Student c = Student("cai", 9990);
    vector<Student> svec = { a,b,c };
    cout << "Unsorted:" << endl;
    for (vector<Student>::iterator it = svec.begin(); it != svec.end(); ++it) {
        cout << *it << endl;
    }
    //qsort(&svec.begin(), svec.size(), sizeof(Student), compareStudentID);
    cout << "sorted:" << endl;
    sort(svec.begin(), svec.end(), compareStudentID);
    for (vector<Student>::iterator it = svec.begin(); it != svec.end(); ++it) {
        cout << *it << endl;
    }
    cout << "ifstream: " << endl << endl;
    //char line[];
    ifstream infile;
    infile.open("input.txt");

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
