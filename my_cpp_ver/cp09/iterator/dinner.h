#ifndef _DINNER_H_
#define _DINNER_H_
#include <iostream>
#include "menu_item.h"
#include "iterate.h"
namespace iter{
	class dinner
	{
	public:
		dinner(){
			menu_item *m1 = new menu_item("Veg BLT", "(FAKING)Bacon with lettuce & tomato on whole wheat", true, 2.99);
			menu_item *m2 = new menu_item("BLT", "Bacon with lettuce & tomato on whole wheat", false, 2.99);
			menu_item *m3 = new menu_item("soup of the day", "soup of the day with a slide piece of potato", false, 3.29);
			add_item(m1);
			add_item(m2);
			add_item(m3);
		}
		~dinner(){}
		void add_item(menu_item *m){
			if(num_items >= max_item){
				cout << "Sorry the menu is full, pls wait." << endl;
			}else{
				items[num_items] = m;
				num_items ++;
			}
		}
		iterate *create_iterate()
		{
			return new dinner_iterate(items, max_item);
		}
	private:
		static const int max_item = 10;
		menu_item *items[max_item];
		int num_items;
	};
}
#endif
