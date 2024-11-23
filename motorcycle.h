#pragma once
#include "sale.h"
#include "rent.h"
#include "vehicle.h"
class motorcycle :public rent , public sale
{
public:
	void saleIt();
	void rentIt();
};

