//#pragma once
#ifndef __TRANSACTION__
#define __TRANSACTION__
#include <string>

class Transaction
{
private:
	int amount;
	std::string type; 

public:
	Transaction( int amount , std::string type);
	std::string Report() const;
};
#endif