// Created by Shengjia Yan @2016-2-16

#include "healthprofile.h"

HealthProfile::HealthProfile(string firstname, string lastname, string gender, int month, int day, int year, int height, int weight)
{
    this->firstname = firstname;
    this->lastname  = lastname;
    this->gender    = gender;
    this->month     = month;
    this->day       = day;
    this->year      = year;
    this->height    = height;
    this->weight    = weight;
}

void HealthProfile::setFirstname(string firstname)
{
    this->firstname = firstname;
}

string HealthProfile::getFirstname()
{
    return this->firstname;
}

void HealthProfile::setLastname(string lastname)
{
    this->lastname = lastname;
}

string HealthProfile::getLastname()
{
    return this->lastname;
}

void HealthProfile::setGender(string gender)
{
    this->gender = gender;
}

string HealthProfile::getGender()
{
    return this->gender;
}

void HealthProfile::setMonth(int month)
{
    this->month = month;
}

int HealthProfile::getMonth()
{
    return this->month;
}

void HealthProfile::setDay(int day)
{
    this->day = day;
}

int HealthProfile::getDay()
{
    return this->day;
}

void HealthProfile::setYear(int year)
{
    this->year = year;
}

int HealthProfile::getYear()
{
    return this->year;
}

void HealthProfile::setHeight(int height)
{
    this->height = height;
}

int HealthProfile::getHeight()
{
    return this->height;
}

void HealthProfile::setWeight(int weight)
{
    this->weight = weight;
}

int HealthProfile::getWeight()
{
    return this->weight;
}

int HealthProfile::getAge()
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

int HealthProfile::getMaxiumumHeartRate()
{
    this->maxHeartRate = 220 - this->age;
    return this->maxHeartRate;
}

void HealthProfile::getTargetHeartRate()
{
    this->upTargetHeartRate = this->maxHeartRate * 0.85;
    this->downTargetHeartRate = this->maxHeartRate * 0.50;
    cout<<"The person's target-heart-rate range is ["<<downTargetHeartRate<<","<<upTargetHeartRate<<"]"<<endl;
}

double HealthProfile::getBMI()
{
    this->bmi = (double)this->weight / ((double)this->height * (double)this->height);
    cout << "The BMI is " << this->bmi << endl;
	cout << "BMI VALUES" << endl;
	cout << "Underweight: less than 18.5" << endl;
	cout << "Normol:      between 18.5 and 24.9" << endl;
	cout << "Overweight:  between 25 and 29.9" << endl;
	cout << "Obese:       30 or greater" << endl;
    return this->bmi;
}

int main()
{
    HealthProfile healthprofile0("Shengjia", "Yan", "Male", 2, 5, 1995, 70, 200);
    cout<<"The person's firstname is "<<healthprofile0.getFirstname()<<endl;
    cout<<"The person's lastname is "<<healthprofile0.getLastname()<<endl;
    cout<<"The person's gender is "<<healthprofile0.getGender()<<endl;
    cout<<"The person's date of birth is "<<healthprofile0.getMonth()<<"/"<<healthprofile0.getDay()<<"/"<<healthprofile0.getYear()<<endl;
    cout<<"The person's height is "<<healthprofile0.getHeight()<<endl;
    cout<<"The person's weight is "<<healthprofile0.getWeight()<<endl;
    healthprofile0.getAge();
    cout<<"The person's maximum heart rate is "<<healthprofile0.getMaxiumumHeartRate()<<endl;
    healthprofile0.getTargetHeartRate();
    healthprofile0.getBMI();
    return 0;
}
