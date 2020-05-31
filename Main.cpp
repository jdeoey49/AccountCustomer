#include<iostream>
#include"Account.h"
#include"Customer.h"
using namespace std;
int main()
{
	Account new_Account(4711, 100);
	Customer new_Customer("Customer", new_Account);
	new_Customer.addMoney(20);
	new_Customer.accessAccount().addMoney(100);
	new_Customer.accessAccount().withdrawMoney(50);
	cout << new_Customer.accessAccount();
	return 0;
}