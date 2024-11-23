#pragma once
#include <string>
using namespace std;
class vehicle
{
public:
	void showInfo();
    virtual void driving();
//protected:
	string factory;
	string type;
	string color;
	int maxV;
	int year_of_production;

};

