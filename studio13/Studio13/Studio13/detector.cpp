#include <iostream>
#include "detector.h"

using namespace std;

unsigned int Detector::wumbology = 0; //init to 0

Detector::Detector()
{
	wumbo = wumbology;
	wumbology++;
	cout << "Detector(): " << this << "  --> wumbo = " << this->getWumbo() << endl;
}

Detector::~Detector()
{
	cout << "~Detector(): " << this << "  --> wumbo = " << this->getWumbo() << endl;
}

int Detector::getWumbo()
{
	return this->wumbo;
}
