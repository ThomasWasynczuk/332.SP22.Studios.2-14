// stud10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int guy1 = 24;
    int guy2 = 25;
    int& lguy1 = guy1;
    int& lguy2 = guy2;
    int&& rguy1 = guy1*2;
    int&& rguy2 = guy2*2;

    cout << guy1 << " " << lguy1 << ' ' << rguy1 << endl;
    cout << guy2 << ' ' << lguy2 << ' ' << rguy2 << endl;
    
    int&& jeremy = move(guy1);
    int jeremyi = jeremy;

    cout << jeremy << ' ' << jeremyi << endl;

    

    return 1;
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
