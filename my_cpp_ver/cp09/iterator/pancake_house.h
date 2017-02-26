#ifndef _PANCAKE_HOUSE_H_
#define _PANCAKE_HOUSE_H_
#include "menu_item.h"
#include "iterate.h"
#include <vector>
using namespace std;
namespace iter{
	class pancake_house
	{
	public:
		pancake_house(){
			menu_item *m1 = new menu_item("K&B pancake breakfast", "pancake with scrambled eggs, and toasted", true, 2.99);
			menu_item *m2 = new menu_item("Regular pancake breakfast", "pancake with fried egg, sauages", false, 2.99);
			menu_item *m3 = new menu_item("Blueberry pancake", "pancake made with fresh blueberry", true, 3.49);

			add_item(m1);
			add_item(m2);
			add_item(m3);
		}
		~pancake_house(){}
		void add_item(menu_item *m){
			items.push_back(m);
		}
		iterate *create_iterate()
		{
			return new pancake_iterate(items);
		}
	private:
		vector <menu_item *> items;	
	};	
}
#endif
