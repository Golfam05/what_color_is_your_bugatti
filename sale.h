#pragma once
#include "vehicle.h"
#include "rent.h"
#include <iostream>
using namespace std;
class sale : public vehicle
{
protected:
	int price;
	bool isSaled;
public:
	virtual void saleIt();
};

