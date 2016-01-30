// created by Shengjia Yan @2016-1-29

#include <iostream>
using namespace std;

class Employee
{
public:
	Employee(string, string, int);
	void setFirstname(string);
	string getFirstname();
	void setLastname(string);
	string getLastname();
	void setSalary(int);
	int getSalary();
private:
	string firstname;	// 名
	string lastname;	// 姓
	int salary;		    // 月薪
};