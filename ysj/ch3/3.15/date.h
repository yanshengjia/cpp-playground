// Created by Shengjia Yan @2016-1-31

#include <iostream>
using namespace std;

class Date
{
public:
    Date(int, int, int);
    void setMonth(int);
    int getMonth();
    void setDay(int);
    int getDay();
    void setYear(int);
    int getYear();
    void displayDate();

private:
    int month;
    int day;
    int year;
};