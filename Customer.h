#pragma once
#include<iostream>
#include"Account.h"
class Customer
{
	public:
		Customer(const std::string& n_ref, Account& a_ref);
		~Customer();
		Account& accessAccount();
		void addMoney(double);
	private:
		std::string name_;
		Account& account_ref_;
};