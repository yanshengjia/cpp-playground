// created by Shengjia Yan @2016-1-28
#include "invoice.h"

Invoice::Invoice(string partNumber, string partDescription, int quantity, int price)
{
	this->partNumber = partNumber;
	this->partDescription = partDescription;
	this->quantity = quantity;
	this->price = price;
}

void Invoice::setPartNumber(string partNumber)
{
	this->partNumber = partNumber;
}

string Invoice::getPartNumber()
{
	return this->partNumber;
}

void Invoice::setPartDescription(string partDescription)
{
	this->partDescription = partDescription;
}

string Invoice::getPartDescription()
{
	return this->partDescription;
}

void Invoice::setQuantity(int quantity)
{
	this->quantity = quantity;
}

int Invoice::getQuantity()
{
	return this->quantity;
}

void Invoice::setPrice(int price)
{
	this->price = price;
}

int Invoice::getPrice()
{
	return this->price;
}

int Invoice::getInvoiceAmount()	// ·µ»Ø·¢Æ±½ð¶î
{
	return (this->quantity) * (this->price);
}

int main()
{
	cout << "Create an Invoice object: invoice" << endl;
	Invoice invoice("007", "cool", 100, 9);
	cout << "Initial:" << endl;
	cout << "The part number of invoice is " << invoice.getPartNumber() << endl;
	cout << "The part description of invoice is " << invoice.getPartDescription() << endl;
	cout << "The quantity of the item being purchased in invoice is " << invoice.getQuantity() << endl;
	cout << "The price per item in invoice is " << invoice.getPrice() << endl;
	cout << "The invoice amout is " << invoice.getInvoiceAmount() << endl;

	cout << "Update:" << endl;
	cout << "Set part number as 001" << endl;
	invoice.setPartNumber("001");
	cout << "Set part description as awsome" << endl;
	invoice.setPartDescription("awsome");
	cout << "Set the quantity of the item being purchased in invoice as 111" << endl;
	invoice.setQuantity(111);
	cout << "Set the price per item in invoice as 5" << endl;
	invoice.setPrice(5);

	cout << "The part number of invoice is " << invoice.getPartNumber() << endl;
	cout << "The part description of invoice is " << invoice.getPartDescription() << endl;
	cout << "The quantity of the item being purchased in invoice is " << invoice.getQuantity() << endl;
	cout << "The price per item in invoice is " << invoice.getPrice() << endl;
	cout << "The invoice amout is " << invoice.getInvoiceAmount() << endl;

	system("pause");
	return 0;
}