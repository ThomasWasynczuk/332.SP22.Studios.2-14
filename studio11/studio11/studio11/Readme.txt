1. 
class Student {
    string name;
    unsigned int id;
};
-->
class Student {
    string name;
    unsigned int id;
public:
    Student();
    Student(string, int);
};

2. must overload the << operator
3. I needed to make a function to determine the order of sort(), so I made one
   looking at the students id #, but i actually did this outside of the Student class.
