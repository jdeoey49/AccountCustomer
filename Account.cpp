#include<iostream>
#include"Account.h"
using namespace std;
Account::Account(int a_no, double bal) :account_number_(a_no), balance_(bal)
{
	cout << "class Account: constructor running" << endl;
}
Account::~Account() 
{
	cout << "class Account: destructor running" << endl;
}
double Account::getBalance() const { return balance_; }
int Account::getAccountNumber() const { return account_number_; }
void Account::addMoney(double amount)
{
	balance_ += amount;
}
void Account::withdrawMoney(double amount)
{
	balance_ -= amount;
}
ostream& operator<<(ostream& out, Account& acct)
{
	out << "Account number: " << acct.account_number_
		<< "Account balance: " << acct.balance_;
	return out;
}