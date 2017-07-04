// created by Shengjia Yan @2016-1-29

#include "employee.h"

Employee::Employee(string firstname, string lastname, int salary)
{
    this->firstname = firstname;
    this->lastname = lastname;
    this->salary = salary;
}

void Employee::setFirstname(string firstname)
{
    this->firstname = firstname;
}

string Employee::getFirstname()
{
    return this->firstname;
}

void Employee::setLastname(string lastname)
{
    this->lastname = lastname;
}

string Employee::getLastname()
{
    return this->lastname;
}

void Employee::setSalary(int salary)
{
    if(salary > 0)
    {
        this->salary = salary;
    }
    else
    {
        this->salary = 0;
    }
}

int Employee::getSalary()
{
    return this->salary;
}

int main()
{
    cout<<"Create employee1!"<<endl;
    Employee employee1("obama", "black", 100);
    int salary1 = employee1.getSalary();
    cout<<"The firstname is "<<employee1.getFirstname()<<endl;
    cout<<"The lastname is "<<employee1.getLastname()<<endl;
    cout<<"The monthly salary is "<<salary1<<endl;
    cout<<"The yearly salary is "<<12*salary1<<endl;
    cout<<"After given a 10 percent raise, ";
    employee1.setSalary(salary1*1.1);
    salary1 = employee1.getSalary();
    cout<<"The yearly salary is "<<12*salary1<<endl<<endl;
    
    cout<<"Create employee2!"<<endl;
    Employee employee2("Jinping", "Xi", 200);
    int salary2 = employee2.getSalary();
    cout<<"The firstname is "<<employee2.getFirstname()<<endl;
    cout<<"The lastname is "<<employee2.getLastname()<<endl;
    cout<<"The monthly salary is "<<salary2<<endl;
    cout<<"The yearly salary is "<<12*salary2<<endl;
    cout<<"After given a 10 percent raise, ";
    employee2.setSalary(salary2*1.1);
    salary2 = employee2.getSalary();
    cout<<"The yearly salary is "<<12*salary2<<endl<<endl;
    return 0;
}