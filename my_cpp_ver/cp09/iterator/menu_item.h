#ifndef _H_MENU_ITEM_H_
#define _H_MENU_ITEM_H_
#include <string>
using namespace std;
namespace iter{
	class menu_item
	{
	public:
		menu_item(string name, string description, bool vegetarian, double price){
			this->name = name;
			this->description = description;
			this->vegetarian = vegetarian;
			this->price = price;
		}
		~menu_item(){}
		string get_name(){
			return name;
		}
		string get_description(){
			return description;
		}
		bool get_vegetarian(){
			return vegetarian;
		}
		double get_price(){
			return price;
		}
	private:
		string name;
		string description;
		bool vegetarian;
		double price;
	};
}
#endif
