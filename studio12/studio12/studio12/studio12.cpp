// studio12.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include "Header.h"
using namespace std;

MyClass::MyClass() {
    cout << "class name: MyClass" << endl << "method: MyClass()" << endl << endl;
}
MyClass::~MyClass() {
    cout << "class name: MyClass" << endl << "method: ~MyClass()" << endl << endl;
}

Derived::Derived() {
    cout << "class name: Derived" << endl << "method: Derived()" << endl << endl;
}
Derived::~Derived() {
    cout << "class name: Derived" << endl << "method: ~Derived()" << endl << endl;
}
void Derived::dup() {
    cout << "class name: Derived" << endl << "method: dup()" << endl << endl;
}
void MyClass::dup() {
    cout << "class name: MyClass" << endl << "method: dup()" << endl << endl;
}

int main()
{
    //MyClass mine = MyClass();
    //Derived der = Derived();

    //MyClass& miner = mine;
    //MyClass& minder = der;
    //Derived& derr = der;

    //cout << "calling dup on..." << endl;
    //cout << "mine:" << endl;
    //mine.dup();
    //cout << "der:" << endl;
    //der.dup();
    //cout << "miner:" << endl;
    //miner.dup();
    //cout << "minder:" << endl;
    //minder.dup();
    //cout << "derr:" << endl;
    //derr.dup();

    //MyClass* minep = &mine;
    //MyClass* minderp = &der;
    //Derived* derp = &der;

    //cout << "calling dup on..." << endl;
    //cout << "mine:" << endl;
    //mine.dup();
    //cout << "derp:" << endl;
    //der.dup();
    //cout << "minep:" << endl;
    //minep->dup();
    //cout << "minderp:" << endl;
    //minderp->dup();
    //cout << "derp:" << endl;
    //derp->dup();

    MyClass* minep = new MyClass();
    MyClass* minderp = new Derived();
    Derived* derp = new Derived();

    delete minep;
    delete minderp;
    delete derp;

    //cout << "calling dup on..." << endl;
    //cout << "minep:" << endl;
    //minep->dup();
    //cout << "minderp:" << endl;
    //minderp->dup();
    //cout << "derp:" << endl;
    //derp->dup();

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
