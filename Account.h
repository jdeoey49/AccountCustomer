#pragma once
#include<iostream>
class Account
{
	friend std::ostream& operator<<(std::ostream& out, Account& acct);
	public:
		Account(int=0, double=0.0);
		~Account();
		double getBalance() const;
		int getAccountNumber() const;
		void addMoney(double);
		void withdrawMoney(double);
	private:
		int account_number_;
		double balance_;
};