#pragma once


class Detector {
private:
	unsigned int wumbo;
	static unsigned int wumbology; //init to 0

public:
	Detector();
	~Detector();
	int getWumbo();

};