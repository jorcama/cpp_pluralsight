#include "Account.h"
#include <iostream>
using std::vector;
using std::string;
using std::to_string;
using std::cout;

Account::Account() : balance( 0 ), limit(100)
{
}

vector<string> Account::Report()
{
	vector<string> report;
	report.push_back( "Balance is: " + to_string( balance ) );
	report.push_back( "Transactions:" );
	for ( auto t : log ) 
	{
		report.push_back( t.Report() );
	}
	report.push_back( "-----------------------------" );

	return report;
}

bool Account::Deposit( int amount )
{
	if ( amount >= 0 )
	{
		balance += amount;
		log.push_back( Transaction( amount, "Deposit" ) );
		balance -= 1;
		log.push_back( Transaction( 1, "Service charge" ) );
		return true;
	}
	return false;
}

bool Account::WithDraw( int amount )
{
	if ( amount <= 0 )
	{
		return false;
	}
	if ( (balance + limit) >= amount )
	{
		balance -= amount;
		log.push_back( Transaction( amount, "Withdraw" ) );
		balance -= 1;
		log.push_back( Transaction( 1, "Service charge" ) );
		return true;
	}
	return false;
}

void doClass() {
	Account account;

	account.Deposit( 90 );
	cout << "After depositing $90 " << "balance is: " << account.GetBalance() << "\n";

	account.WithDraw( 50 );
	if ( account.WithDraw( 100 ) )
	{
		cout << "Success on withdraw 100 ";
	}

	cout << "After withdrawing €50 and then €100 " << "balance is: " << account.GetBalance() << "\n";

	for (auto t : account.Report() )
	{
		cout << t << "\n";
	}
}