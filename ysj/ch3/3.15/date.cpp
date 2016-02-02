// Created by Shengjia Yan @2016-1-31

#include "date.h"

Date::Date(int month, int day, int year)
{
    if(month>=1 && month<=12)
    {
        this->month = month;
    }
    else
    {
        this->month = 1;
    }
    
    this->day   = day;
    this->year  = year;
}

void Date::setMonth(int month)
{
    this->month = month;
}

int Date::getMonth()
{
    return this->month;
}

void Date::setDay(int day)
{
    this->day = day;
}

int Date::getDay()
{
    return this->day;
}

void Date::setYear(int year)
{
    this->year = year;
}

int Date::getYear()
{
    return this->year;
}

void Date::displayDate()
{
    cout<<"The date is "<<this->month<<"/"<<this->day<<"/"<<this->year<<" now"<<endl;
}

int main()
{
    cout<<"Create a date..."<<endl;
    Date date0(13, 1, 2016);
    date0.displayDate();
    cout<<"Set the date as 2/5/1995"<<endl;
    date0.setMonth(2);
    date0.setDay(5);
    date0.setYear(1995);
    date0.displayDate();
    return 0;
}