#ifndef _MENU_ITEM_H_
#define _MENU_ITEM_H_
#include "menu_comp.h"
#include <iostream>
using namespace std;
class menu_item:public menu_comp
{
public:
	menu_item(string n, string d, double p, bool v):name(n), description(d), price(p), veg(v){}
	~menu_item(){}
	string get_name(){
		return name;
	}
	string get_description(){
		return description;
	}
	double get_price(){
		return price;
	}
	bool is_veg(){
		return veg;
	}
	void print(){
		cout<< " "<< get_name();
		if(is_veg()){
			cout << "(V)";
		}
		cout << ","<<get_price();
		cout << "    ----" << get_description() <<endl;
	}
private:
	string name;
	string description;
	double price;
	bool veg;
};
#endif
