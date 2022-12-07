// studio8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Header.h"
using namespace std;





truck::truck() :milage(0), value(0) {}
truck::truck(const truck& t):milage(t.getMilage()),value(t.getValue()){}
int truck::getMilage() const { return this->milage; }
int truck::getValue() const { return this->value; }
truck& truck::setMilage(int mil) {
    this->milage = mil;
    return *this;
}

truck& truck::setValue(int mil) {
    this->value = mil;
    return *this;
}


int main()
{
    //std::cout << "Hello World!\n";
    struct truck ridgeline;
        
    cout <<"ridgeline.getMilage = " <<ridgeline.getMilage() << " and ridgeline.getValue = " << ridgeline.getValue() << endl;
    ridgeline.setMilage(200);
    ridgeline.setValue(100);

    cout << "ridgeline.getMilage = " <<ridgeline.getMilage() << " and ridgeline.getValue = " << ridgeline.getValue() << endl;
    truck fwanfidy(ridgeline);
    cout << "fwanfidy.getMilage = " <<fwanfidy.getMilage() << " and fwanfidy.getValue = " << fwanfidy.getValue() << endl;


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
