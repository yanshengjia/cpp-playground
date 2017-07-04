// Created by Shengjia Yan @2016-2-16

#include <iostream>
#include <string>
using namespace std;

class HealthProfile
{
public:
    HealthProfile(string, string, string, int, int, int, int, int);
    void setFirstname(string);
    string getFirstname();
    void setLastname(string);
    string getLastname();
    void setGender(string);
    string getGender();
    void setMonth(int);
    int getMonth();
    void setDay(int);
    int getDay();
    void setYear(int);
    int getYear();
    void setHeight(int);
    int getHeight();
    void setWeight(int);
    int getWeight();
    int getAge();
    int getMaxiumumHeartRate();
    void getTargetHeartRate();
    double getBMI();
    
private:
    string firstname;           // 名
    string lastname;            // 姓
    string gender;              // 性别
    int month;                  // 生日之月
    int day;                    // 生日之日
    int year;                   // 生日之年
    int height;                 // 身高(inch)
    int weight;                 // 体重(pound)
    int age;                    // 年龄
    int maxHeartRate;           // 最大心率
    int upTargetHeartRate;      // 目标心率上限
    int downTargetHeartRate;    // 目标心率下限
    double bmi;                 // 身体质量指数
};

