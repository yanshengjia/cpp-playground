// created by Shengjia Yan @2016-1-28
#include <iostream>
#include <string>
using namespace std;

class Invoice
{
public:
	Invoice(string, string, int, int);
	void setPartNumber(string);
	string getPartNumber();
	void setPartDescription(string);
	string getPartDescription();
	void setQuantity(int);
	int getQuantity();
	void setPrice(int);
	int getPrice();
	int getInvoiceAmount();	   // 返回发票金额

private:
	string partNumber;			// 零件编号
	string partDescription;		// 零件描述
	int quantity;			    // 被订购的物件数量
	int price;					// 物件单价
};