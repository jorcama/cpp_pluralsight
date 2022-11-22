#include <iostream>
#include "Functions.h"
#include "Collections.h"
#include "Account.h"

using std::cout;


int main()
{
	//Project properties modified Treat Warnings as Errors: True
	/*
	int i = 3;
	if (i = 4)
	{
		i ++;
	}*/

	doClass();
	doCollections();
	
	doStringExercise();
	doString ();

	doStreamIO();
	doFlowOfControl();
	doGuesMyNumber();
	doFunctions();

	cout << "End.";
	return 0;
}