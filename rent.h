#pragma once
#include "vehicle.h"
class rent :public vehicle
{
protected:
	int Rented_days;
	bool isRented=false;
public:
	void rentIt();
	bool check_if_it_is_rented();

};

