#include <iostream>
#include "Transaction.h"
using std::cout;

void tryToChangeTransaction(Transaction t){
	t.DoubleAmount();
}

void changeTransaction(Transaction&  t){
	t.DoubleAmount();
}

int main()
{
	Transaction deposit(50, "deposit");
	cout << "Original:" << deposit.Report() << "\n";

	tryToChangeTransaction(deposit);
	cout << "After passing by value:" << deposit.Report() << "\n";

	changeTransaction(deposit);
	cout << "After passing by reference:" << deposit.Report() << "\n";
	
	return 0;
}
