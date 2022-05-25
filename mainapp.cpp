#include<iostream>
#include "itemmanager.hpp"
#include "item.hpp"

using namespace std;

int main()
{
	char itemName[30];
	char productName[30];
	int numc=0;
	cout<<"--------------------------------------------------------------"<<endl;
	cout<<"\tMAIN MENU"<<endl;
	cout<<"--------------------------------------------------------------"<<endl;
	int choice=0;
	item i;
	ItemManager imanager;
	while(true)
	{
		cout<<"\n";
        cout<<"\nInventory Management";
        cout<<"\n1. Insert new item";
        cout<<"\n2. View all the items";
        cout<<"\n3. Delete item";
        cout<<"\n4. Modify item";
        cout<<"\n5. Display all the items of a particular product category";
        cout<<"\n6. Display the item for a given Item name";
        cout<<"\n7. Display all the items with Stock less than 5 ";
        cout<<"\n0. Exit"<<endl;
		cout<<"Enter Choice : ";
		cin>>choice;

		switch(choice)
		{
			case 1:
				char product_name[30];
    			 	char item_name[30];
                 		int  item_weight;
                 		int item_price;
    			 	int day1,month1,year1;
                 		int day2,month2,year2;
                 		char manufacturer[30];
                 		int day3,month3,year3;
                 		int stock_count;
                 		cout << "\n Enter Product Name : ";
	             		cin>>product_name;
                 		cout << "\n Enter Item Name : ";
                 		cin>>item_name;
	            		cout << "\n Enter Item weight(in gram) : ";
	            		cin >> item_weight;
	            		cout << "\n Enter Item price(in rupees) : ";
	            		cin >> item_price;
	            		cout << "\n Enter Expiry date :";
	            		cout << "\n Enter Day : ";
	            		cin >> day1;
	            		cout << "\n Enter Month : ";
	            		cin >> month1;
	            		cout << "\n Enter Year : ";
	            		cin >> year1;
	            		cout << "\n Enter Entry date :";
	            		cout << "\n Enter Day : ";
	            		cin >> day2;
	            		cout << "\n Enter Month : ";
	            		cin >> month2;
	            		cout << "\n Enter Year : ";
	            		cin >> year2;
	            		cout << "\n Enter Manufacturer Name : ";
	            		cin>>manufacturer;
	            		cout << "\n Enter Manufacturing date :";
	            		cout << "\n Enter Day : ";
	            		cin >> day3;
	            		cout << "\n Enter Month : ";
	            		cin >> month3;
	            		cout << "\n Enter Year : ";
	            		cin >> year3;
	            		cout << "\n Enter Stock Count : ";
	            		cin >> stock_count;
				i.setItemData(product_name,item_name,item_weight,item_price,day1,month1,year1,day2,month2,year2,manufacturer,day3,month3,year3,stock_count);
			
				if(imanager.addItem(i))
					cout<<"New Item added successfully"<<endl;
				else
					cout<<"Adding item failed"<<endl;
				break;
			case 2:
				imanager.showItem();
				break;
			case 3:
				cout<<"Enter the item name to delete"<<endl;
				cin>>itemName;
				if(imanager.deleteItem(itemName))
					cout<<"Item with Item Name "<<itemName<<" found and deleted"<<endl;					
				else
					cout<<"Item with Item name "<<itemName<<" not found "<<endl;					
					
				break;
			case 4:
				cout<<"Enter the item name to Update"<<endl;
				cin>>itemName;
				cout<<"Update the number of stock"<<endl;
				cin>>numc;
				if(imanager.modify(itemName,numc))
					cout<<"Item with Item Name "<<itemName<<" found and Updated"<<endl;					
				else
					cout<<"Item with Item name "<<itemName<<" not found "<<endl;				
					
				break;
			case 5:
			    cout<<"Enter the product name"<<endl;
				cin>>productName;
				if(imanager.searchProduct(productName))
					cout<<"product with Product Name "<<productName<<" found "<<endl;					
				else
					cout<<"Product with Item name "<<itemName<<" not found "<<endl;				
					
				break;
			case 6:
			    cout<<"Enter the item name"<<endl;
				cin>>itemName;
				if(imanager.searchItem(itemName))
					cout<<"Item with Item Name "<<itemName<<" found"<<endl;					
				else
					cout<<"Item with Item name "<<itemName<<" not found "<<endl;				
					
				break;
			case 7:
				if(imanager.searchCount())
					cout<<"Items with stock less than 5 found"<<endl;
				else
					cout<<"Items with stock less than 5 not found"<<endl;
				break;
			case 0:
				cout<<"Exit from application"<<endl;
				break;
			default:
				cout<<"Invalid Choice"<<endl;
		}//end of switch
		if(choice==0)
			break;
	}//end of while

}//end of main

