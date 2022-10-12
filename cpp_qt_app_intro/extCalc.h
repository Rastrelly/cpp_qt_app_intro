#pragma once
#include <string>

class extCalc
{
private: 
	float a;
	float b;
	float c;
	int op;
	bool err;
	std::string res;

	void makeCalculation();

public:
	extCalc() { a = 0; b = 0; op = 0; res = ""; };
	void setA(float val) { a = val; }
	void setB(float val) { b = val; }
	void setOP(int val) { op = val; }
	float getC() { return c; }
	bool getErr() { return err; }
	std::string getRes() { return res; }
	void callCalc() { makeCalculation(); };
};

