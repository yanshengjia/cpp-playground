// Created by Shengjia Yan @2016-2-14

#include <iostream>
#include <string>
using namespace std;

class HeartRates
{
public:
    HeartRates(string, string, int, int, int);
    void setFirstname(string);
    string getFirstname();
    void setLastname(string);
    string getLastname();
    void setMonth(int);
    int getMonth();
    void setDay(int);
    int getDay();
    void setYear(int);
    int getYear();
    int getAge();
    int getMaxiumumHeartRate();
    void getTargetHeartRate();

private:
    string firstname;   // 人的名
    string lastname;    // 人的姓
    int month;          // 生日所在月
    int day;            // 生日所在日
    int year;           // 生日所在年
    int age;            // 人的年龄
    int maxHeartRate;   // 最大心率
    int upTargetHeartRate;      // 目标心率上限
    int downTargetHeartRate;    // 目标心率下限
};