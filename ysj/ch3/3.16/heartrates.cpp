// Created by Shengjia Yan @2016-2-14

#include "heartrates.h"

HeartRates::HeartRates(string firstname, string lastname, int month, int day, int year)
{
    this->firstname = firstname;
    this->lastname  = lastname;
    this->month     = month;
    this->day       = day;
    this->year      = year;
}

void HeartRates::setFirstname(string firstname) 
{
    this->firstname = firstname;
}

string HeartRates::getFirstname()
{
    return this->firstname;
}

void HeartRates::setLastname(string lastname)
{
    this->lastname = lastname;
}

string HeartRates::getLastname()
{
    return this->lastname;
}

void HeartRates::setMonth(int month)
{
    this->month = month;
}

int HeartRates::getMonth()
{
    return this->month;
}

void HeartRates::setDay(int day)
{
    this->day = day;
}

int HeartRates::getDay()
{
    return this->day;
}

void HeartRates::setYear(int year)
{
    this->year = year;
}

int HeartRates::getYear()
{
    return this->year;
}

int HeartRates::getAge()
{
    int current_month, current_day, current_year;
    cout<<"Please enter the current month, day and year of the computer: "<<endl;
    cin>>current_month>>current_day>>current_year;
    
    if(this->month < current_month)
    {
        this->age = current_year - this->year;
    }
    else if(this->month > current_month)
    {
        this->age = current_year - this->year -1;
    }
    else
    {
        if(this->day <= current_day)
        {
            this->age = current_year - this->year;
        }
        else
        {
            this->age = current_year - this->year -1;
        }
    }
    
    cout<<"The person's age is "<<this->age<<endl;
    return this->age;
}

int HeartRates::getMaxiumumHeartRate()
{
    this->maxHeartRate = 220 - this->age;
    return this->maxHeartRate;
}

void HeartRates::getTargetHeartRate()
{
    this->upTargetHeartRate = this->maxHeartRate * 0.85;
    this->downTargetHeartRate = this->maxHeartRate * 0.50;
    cout<<"The person's target-heart-rate range is ["<<downTargetHeartRate<<","<<upTargetHeartRate<<"]"<<endl;
}
    

int main()
{
    HeartRates person("Shengjia", "Yan", 2, 5, 1995);
    cout<<"The person's firstname is "<<person.getFirstname()<<endl;
    cout<<"The person's lastname is "<<person.getLastname()<<endl;
    cout<<"The person's date of birth is "<<person.getMonth()<<"/"<<person.getDay()<<"/"<<person.getYear()<<endl;
    person.getAge();
    cout<<"The person's maximum heart rate is "<<person.getMaxiumumHeartRate()<<endl;
    person.getTargetHeartRate();
     
    return 0;
}