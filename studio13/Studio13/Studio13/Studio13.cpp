// Studio13.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "detector.h"
#include <vector>

using namespace std;

shared_ptr<Detector> anotherFtn(shared_ptr<Detector> shed) {
    cout << "other ftn start" << endl;
    cout << shed<<endl;


    cout << "other ftn end" << endl;
    return shared_ptr<Detector>(shed);
    //4a. the original shared ptr destroys the obj (we use the same one all the way through)
    //4b. after main terminates
    //4c. obj is only deleted once
    //4d. theres one shared ptr the whole time, nothing remains because we have 1 obj, 1 constr call, and 1 destr call
}


int main(int argc, char *argv[])
{
    cout << endl;

    Detector* de;
    de = new Detector();

    shared_ptr<Detector> desh(de);
//q3: the object is destroyed once it it out of scope

    desh = anotherFtn(desh);
    
    shared_ptr<Detector> desh1(new Detector());
    shared_ptr<Detector> desh2(new Detector());
    shared_ptr<Detector> desh3(new Detector());
    vector<shared_ptr<Detector>> swami;
    swami.push_back(desh);
    swami.push_back(desh1);
    swami.push_back(desh2);
    swami.push_back(desh3);
    //5a. same number of objs cons/destructed, same ratio in pt 4
    //5b. this q expects that something curious should happen, maybe i did it wrong but this was allvery expected...


    cout << endl;
}


//Detector() : 00AB6F90-- > wumbo = 0
//other ftn start
//00AB6F90
//other ftn end
//Detector() : 00ABA2B0-- > wumbo = 1
//Detector() : 00ABA430-- > wumbo = 2
//Detector() : 00ABA4F0-- > wumbo = 3
//
//~Detector() : 00ABA4F0-- > wumbo = 3
//~Detector() : 00ABA430-- > wumbo = 2
//~Detector() : 00ABA2B0-- > wumbo = 1
//~Detector() : 00AB6F90-- > wumbo = 0



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
