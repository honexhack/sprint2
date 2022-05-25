#include "item.hpp"
#include "itemmanager.hpp"
#include<iostream>
#include<fstream>
#include<string.h>


ItemManager::ItemManager()
{
   	char product_name[30];
    	char item_name[30];
   	int  item_weight;
   	int item_price;
    	int day1,month1,year1;
   	int day2,month2,year2;
    	char manufacturer[30];
    	int day3,month3,year3;
   	int stock_count;
	item i;
	ifstream in("inventory.txt");
	while(!in.eof())
	{
		in>>product_name;
		in>>item_name;
		in>>item_weight;
		in>>item_price;
		in>>day1;
		in>>month1;
		in>>year1;
		in>>day2;
		in>>month2;
		in>>year2;
		in>>manufacturer;
		in>>day3;
		in>>month3;
		in>>year3;
		in>>stock_count;

		if(in.eof())
			break;
		i.setItemData(product_name,item_name,item_weight,item_price,day1,month1,year1,day2,month2,year2,manufacturer,day3,month3,year3,stock_count);
		items.push_back(i);
	}
	in.close();
}

ItemManager::~ItemManager()
{
	//cout<<"Destructror"<<endl;
	ofstream out("inventory.txt");
	for(item &i: items)
	{
		out<<i.getproduct_name()<<" "<<i.getitem_name()<<" "<<i.getitem_weight()<<" "<<i.getitem_price()<<" "<<i.getday1()<<" "<<i.getmonth1()<<" "<<i.getyear1()<<" "<<i.getday2()<<" "<<i.getmonth2()<<" "<<i.getyear2()<<" "<<i.getmanufacturer()<<" "<<i.getday3()<<" "<<i.getmonth3()<<" "<<i.getyear3()<<" "<<i.getstock_count()<<endl;
	}
	out.close();
}


bool ItemManager::addItem(item i)
{
	cout<<"adding Item"<<endl;
	for(item &it:items)
	{
		if(i.getitem_name() == it.getitem_name())
			return false;	
	}
	items.push_back(i);
	return true;
	
}


void  ItemManager::showItem()
{
	cout<<"Dispalying Item Details"<<endl;
	cout<<"Product Name"<<"\tItem Name"<<"\tItem Weight"<<"\tItem Price"<<"\tExpiry Date"<<"\tEntry Date"<<"\tManufacturer"<<"\tManufacturing Date"<<"\tStock Count"<<endl;
	for(item &i : items)
		i.showItemData();
	cout<<"**************************"<<endl;
}

bool ItemManager::deleteItem(char *itemName)
{
	cout<<"Delete an Item"<<endl;
	for(auto it=items.begin();it!=items.end();it++)
	{
		if(strcmp((*it).getitem_name(),itemName)==0)
		{
			items.erase(it);
			return true;
		}
	}
	return false;
}

bool ItemManager::modify(char *itemName,int numc)
{
	cout<<"updating count of an Item"<<endl;
	for(auto it=items.begin();it!=items.end();it++)
	{
		if(strcmp((*it).getitem_name(),itemName)==0)
		{
			(*it).setstock_count(numc);	
			return true;
		}
	}
	return false;
}

bool ItemManager::searchProduct(char *productName)
{
	//cout<<"updateing count of an Item"<<endl;
	for(auto it=items.begin();it!=items.end();it++)
	{
		if(strcmp((*it).getproduct_name(),productName)==0)
		{
			showItem();	
			return true;
		}
	}
	return false;
}

bool ItemManager::searchItem(char *itemName)
{
	//cout<<"updateing count of an Item"<<endl;
	for(auto it=items.begin();it!=items.end();it++)
	{
		if(strcmp((*it).getitem_name(),itemName)==0)
		{
			showItem();	
			return true;
		}
	}
	return false;
}

bool ItemManager::searchCount()
{
	//cout<<"updateing count of an Item"<<endl;
	for(auto it=items.begin();it!=items.end();it++)
	{
		if((*it).getstock_count() < 5)
		{
			showItem();	
			return true;
		}
	}
	return false;
}







