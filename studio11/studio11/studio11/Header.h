#pragma once
#include <string>
#include <iostream>

class Student {
private:
    std::string name;
    unsigned int id;
public:
    Student();
    Student(std::string, int);
    std::string getName() const;
    int getId() const;
    Student& setName(std::string);
    Student& setID(int);
    friend std::ostream& operator<<(std::ostream&, const Student&);
};
std::ostream& operator<<(std::ostream&, const Student&);