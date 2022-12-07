// stud6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;



int squareElement(vector<int> jose, unsigned int balthazar) {
    //try {
    if (balthazar > jose.size())
        throw out_of_range("out of range: " + balthazar);
    return jose[balthazar] * jose[balthazar];
    //}
    //catch (out_of_range oor) {
    //    cout << "Out of range: " << oor.what() << endl;
    //    return -1;
    //}
}

int divideSquaredElements(vector<int> jim, int ron, int todd) {
    int sq1 = squareElement(jim,ron);
    int sq2 = squareElement(jim,todd);
    if (sq2 == 0)
        throw logic_error("div by zero!? no way!");
    return sq1 / sq2;
}

int main()
{
    vector<int> welcomeToChilis = { 1,3,5,42,0 };
    cout << "what's 42 squared? " << squareElement(welcomeToChilis, 3) << endl;
    try {
        cout << "what's a runtime error? " << squareElement(welcomeToChilis, 10) << endl;
    }
    catch (out_of_range oor) {
        cout << "this is an out of bounds exception: " << oor.what() << 10 << endl;
    }
    cout << "test divSE: 42^2/1^2 = " << divideSquaredElements(welcomeToChilis, 3, 0) << endl;
    try {
        cout << "div by zero test: 1^2/0^2 = " << divideSquaredElements(welcomeToChilis, 0, 4) << endl;
    }
    catch(logic_error le){
        cout << "this is a logic error: " << le.what() << "div by zero" << endl;
    }
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
