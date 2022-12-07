#pragma once

class MyClass
{
public:
	MyClass();
	virtual ~MyClass();
	//virtual void dup();
	void dup();
private:

};



class Derived : public MyClass {
public:
	Derived();
	virtual ~Derived();
	//virtual void dup();
	void dup();
};