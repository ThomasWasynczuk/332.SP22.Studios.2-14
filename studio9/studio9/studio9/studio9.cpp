// studio9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <list>
#include <vector>
#include <deque>
#include <forward_list>
#include <algorithm>
using namespace std;

bool myfunction(int i, int j) { return (i < j); }

int main()
{
    vector<int> vec;
    forward_list<int> fl;
    list<int> li;
    deque<int> deq;
    int ar[] = { 1,2,3,4,5 };
    for (int i = 0; i < 5; i++) {
        vec.push_back(ar[i]); //vector must push back
        li.push_back(ar[i]); // list can do both!
        fl.push_front(ar[4 - i]); //fwdlist must push front
        deq.push_front(ar[4 - i]); //deque can do both!
        
    }
    //std::sort(vec.begin(),vec.end(), myfunction);
    //std::sort(deq.begin(), deq.end(), myfunction);

    reverse(vec.begin(), vec.end());
    reverse(li.begin(), li.end());
    //reverse(fl.begin(), fl.end());
    reverse(deq.begin(), deq.end());


    cout << "Vector: " << endl;
    for (int i = 0; i < 5; i++) {
        cout << vec[i] << ", ";
    }

    cout <<endl<< "list: " << endl;
    for (int i = 0; i < 5; i++) {
        cout << li.front() << ", ";
        li.pop_front();
    }
    cout << endl<<"forward_list: " << endl;
    for (int i = 0; i < 5; i++) {
        cout << fl.front() << ", ";
        fl.pop_front();
    }
    cout << endl<<"deque: " << endl;
    for (int i = 0; i < 5; i++) {
        cout << deq[i] << ", ";
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
