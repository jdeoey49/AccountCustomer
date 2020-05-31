#include<iostream>
#include"Customer.h"
using namespace std;
Customer::Customer(const string& n_ref, Account& a_ref) :name_(n_ref), account_ref_(a_ref) 
{
	cout << "class Customer:constructor running" << endl;

}
Customer::~Customer()
{
	cout << "class Customer:destructor running" << endl;
}
Account& Customer::accessAccount()
{
	return account_ref_;
}
void Customer::addMoney(double amount)
{
	account_ref_.addMoney(amount);
}
