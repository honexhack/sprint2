#ifndef ITEM_H
#define ITEM_H
class item
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
public :
	
	bool setItemData(const char *pname, const char *iname, int iweight, int iprice, int d1, int m1, int y1, int d2, int m2, int y2, const char *imanufacturer, int d3, int m3, int y3, int scount);
	
	bool showItemData();

	char * getproduct_name();
	char * getitem_name();
	int getitem_weight();
	int getitem_price();
	int getday1();
	int getmonth1();
	int getyear1();
	int getday2();
	int getmonth2();
	int getyear2();
	char * getmanufacturer();
	int getday3();
	int getmonth3();
	int getyear3();
	int getstock_count();
	void setstock_count(int);


};
#endif

