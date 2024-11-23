#include "car.h"
void car::saleIt()
{
	if (isSaled == false)
	{
		isSaled = true;
		cout << " congratulations! you rented it!";
	}

	else
	{
		cout << "Unfortunately it was rented befor." << endl << "Operation was unsuccessful";
	}
}

