#pragma once


class truck{
public:
	truck();
	truck(const truck&);
	int getMilage() const;
	int getValue() const;
	truck& setMilage(int);
	truck& setValue(int);
private:
	int milage;
	int value;
};