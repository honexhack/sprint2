#ifndef ITEMMANAGER_H
#define ITEMMANAGER_H
#include<vector>
#include "item.hpp"
using namespace std;
class ItemManager
{

vector<item> items;

public :
	ItemManager();

	bool addItem(item i);
	void showItem();
	
    	bool searchProduct(char *productName);
    	bool searchItem(char *itemName);
    	bool deleteItem(char *itemName);
    	bool modify(char *itemName, int numc);
    	bool searchCount();	
	
	~ItemManager();
};
#endif

