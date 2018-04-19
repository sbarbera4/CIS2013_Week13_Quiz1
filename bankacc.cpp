#include <iostream>
#include <cstring>

using namespace std;

class BankAccount
{
public:
	void depoist(int x)
	{
		balance += x;
	}
	void withdraw(int x)
	{
		balance -= y;
	}
	int balance()
	{
		return balance;
	}
private:
	string name;
	string acct_number;
	string phone;
	int balance;
	float rate;
};

class Savings : public BankAccount
{

public:
	savings(string n, string p)
	{
		rate = 5.0;
		name = n;
		phone = p;
		acct_numb = number++;
		balance = 0;
	}
	void withdraw(int x)
	{
		if (y < withdraw_limit)
		{
			balance -= y;
			if (balance < minimum_balance)
			{
				cout << "warning! you are below the minimum balance." << endl;
			}
		}
		else
		{
			cout << "you are attempting to withdraw more than the maximum withdraw limit." << endl;
		}
	}
private:
	int minimum_balance = 100;
	int withdraw_limit = 100;


};

class Checking : public BankAccount
{
public:
	checking(string n, string p)
	{
		rate = 5.0;
		name = n;
		phone = p;
		acct_numb = number++;
		balance = 0;
	}
private:
	int overdraft_fee = 25;

};

int main()
{
	Checking chk_acct(name, phone);
	
	cout << chk_acct.balance << endl;

	return 0;
}