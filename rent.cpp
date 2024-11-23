#include "rent.h"
#include <iostream>
using namespace std;
void rent:: rentIt()
{
	if (isRented == false)
	{
		isRented = true;
		cout << " congratulations! you rented it!";
	}

	else
	{
		cout << "Unfortunately it was rented befor." << endl << "Operation was unsuccessful";
	}
}

bool rent::check_if_it_is_rented()
{
	if (isRented)
	{
		cout << "it is rented";
		return true;

	}

	else
	{
		cout << "it is not rented";
		return false;
	}
}