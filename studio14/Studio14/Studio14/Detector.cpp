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

Wrapper::Wrapper() : inspector(0){//, boolGuy(true){
	inspector = new Detector();
}

Wrapper::~Wrapper()
{
	delete inspector;
}

Wrapper::Wrapper(const Wrapper& c)
{

	inspector = new Detector;
	*inspector = *(c.inspector);
	//this->boolGuy = false;
}
