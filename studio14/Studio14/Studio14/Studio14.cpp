// Studio14.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include "Detector.h"

int main()
{
    Wrapper rapper = Wrapper();
    //2.1 one (detector) obj created
    //2.2 one (detector) obj destroyed

    //3.1 1 obj created and none destroyed
    //3.2 it looks like having a ptr as a member variable & initializing it only desegnates space for the detector, but the wrapper is desproyed, so all of its memory is freed without calling ~detector()

    //4 the results are the same, no detector destructor is called

    //5 it does not behave the same! there is a destructor that wasnt there before! I expected that to happen but the handout clearly does not and im confused by that...
    Wrapper jimmy = Wrapper(rapper);
    //5.1 one detecotr constructo and one detector destructor
    //5.2 no
    //5.3 "rapper" cons and destructed both

    //6. two objs are created with the deep copy constructor
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
