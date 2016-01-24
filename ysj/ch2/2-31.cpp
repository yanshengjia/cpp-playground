//Money Saving Calculator for Carpooling

#include <iostream>
using namespace std;

int main()
{
	double TotalMiles;
	double Price;
	double AverageMiles;
	double ParkingFee;
	double PassingFee;
	double Consumption;

	cout << "此程序可以计算你每日的汽车消费(automobile consumption)\n并且可以计算当用共乘汽车(carpool)时会节省多少钱\n要实现这些功能\n请你先回答几个问题" << endl;
	cout << endl;

	cout << "你每天开的总公里数是多少？" << endl;
	cin >> TotalMiles;
	cout << endl;

	cout << "每升汽油的价格是多少？" << endl;
	cin >> Price;
	cout << endl;

	cout << "每升汽油可以开的平均公里数是多少？" << endl;
	cin >> AverageMiles;
	cout << endl;

	cout << "你的每日的停车费是多少？" << endl;
	cin >> ParkingFee;
	cout << endl;

	cout << "你的每日的通行费是多少？" << endl;
	cin >> PassingFee;
	cout << endl;


	Consumption = (TotalMiles / AverageMiles)*Price + ParkingFee + PassingFee;
	cout << "你每日的汽车消费是" << Consumption <<"元"<< endl;
	cout << endl;

	cout << "当你参加共乘汽车(一辆车做4人，费用平摊，其他条件不变)的话你每天可以节省" << 0.75 *Consumption << "元" << endl;

	system("pause");
	return 0;

}