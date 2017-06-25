#include "account.h"

Account::Account(int initialBalance)
{
	if (initialBalance >= 0)
	{
		this->balance = initialBalance;
	}
	else
	{
		this->balance = 0;
		cout << "The initial balance was invalid!" << endl;
	}
}

// 存款
void Account::credit(int amount)
{
	this->balance += amount;
}

// 取款
void Account::debit(int withdraw)
{
	if (withdraw > this->balance)
	{
		cout << "Debit amount exceeded account balance!" << endl;
	}
	else
	{
		this->balance -= withdraw;
	}
}

// 返回当前余额
int Account::getBalance()
{
	return this->balance;
}

int main()
{
	cout << "Create account1 with initial balance 100" << endl;
	Account account1(100);
	cout << "The current balance is " << account1.getBalance() << endl;
	cout << "Add 100 to the account" << endl;
	account1.credit(100);
	cout << "The current balance is " << account1.getBalance() << endl;
	cout << "Withdraw 100 from the account" << endl;
	account1.debit(100);
	cout << "The current balance is " << account1.getBalance() << endl;

	cout << "Create account2 with initial balance -100" << endl;
	Account account2(-100);
	system("pause");
	return 0;
}