#include "item.hpp"
#include<string.h>
#include<iostream>
using namespace std;

bool item::setItemData(const char *pname, const char *iname, int iweight, int iprice, int d1, int m1, int y1, int d2, int m2, int y2, const char *imanufacturer, int d3, int m3, int y3, int scount)
{
	strcpy(this->product_name,pname);
	strcpy(this->item_name,iname);
	this->item_weight=iweight;
	this->item_price=iprice;
	this->day1=d1;
	this->month1=m1;
	this->year1=y1;
	this->day2=d2;
	this->month2=m2;
	this->year2=y2;
	strcpy(this->manufacturer,imanufacturer);
	this->day3=d3;
	this->month3=m3;
	this->year3=y3;
	this->stock_count=scount;
	
	return true;
}
bool item::showItemData()
{

	cout<<this->product_name<<"\t"<<this->item_name<<"\t"<<this->item_weight<<"\t"<<this->item_price<<"\t"<<this->day1<<"/"<<this->month1<<"/"<<this->year1<<"\t"<<this->day2<<"/"<<this->month2<<"/"<<this->year2<<"\t"<<this->manufacturer<<"\t"<<this->day3<<"/"<<this->month3<<"/"<<this->year3<<"\t"<<this->stock_count <<endl;
	return true;

}

char * item::getproduct_name()
{
	return product_name;
}

char * item::getitem_name()
{
	return item_name;
}

int item::getitem_weight()
{
	return item_weight;
}

int item::getitem_price()
{
	return item_price;
}

int item::getday1()
{
	return day1;
}

int item::getmonth1()
{
	return month1;
}

int item::getyear1()
{
	return year1;
}

int item::getday2()
{
	return day2;
}

int item::getmonth2()
{
	return month2;
}

int item::getyear2()
{
	return year2;
}

char * item::getmanufacturer()
{
	return manufacturer;
}

int item::getday3()
{
	return day3;
}

int item::getmonth3()
{
	return month3;
}

int item::getyear3()
{
	return year3;
}

int item::getstock_count()
{
	return stock_count;
}

void item::setstock_count(int count)
{
	stock_count=count;
}







