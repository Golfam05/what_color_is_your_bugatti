#include "motorcycle.h"

void motorcycle:: saleIt()
{
	if (isRented)
	{
		cout << "motorcycle is rented" << endl << "buying the car was unsuccess full";
	}
	else
	{
		cout << "buying the car was success full";
		isSaled = true;
	}
}

void motorcycle::rentIt()
{
	if (isRented)
	{
		cout << "renting the car was success full";
	}
	else
	{
        cout << "renting the car was success full";
	    isRented = true;
	}
	
}