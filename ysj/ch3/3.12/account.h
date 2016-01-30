#include <iostream>
using namespace std;

class Account
{
public:
	Account(int);
	void credit(int);		// 存款
	void debit(int);		// 取款
	int getBalance();	    // 返回当前余额
private:
	int balance;
};