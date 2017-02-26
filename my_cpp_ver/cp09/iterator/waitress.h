#ifndef _WAITRESS_H_
#define _WAITRESS_H_
#include "pancake_house.h"
#include "dinner.h"
#include <iostream>
using namespace std;
namespace iter{
	class waitress
	{
	public:
		waitress(pancake_house *ph, dinner *d):ph(ph), d(d){
		}
		~waitress(){}
		void print_menu(){
			iterate *pancake_it = ph->create_iterate();
			iterate *dinner_it = d->create_iterate();
			cout<< "Pancake"<<endl;
			print(pancake_it);
			cout << "Dinner" <<endl;
			print(dinner_it);
		}
	private:
		pancake_house *ph;
		dinner *d;
		void print(iterate *it){
			while(it->has_next()){
				menu_item *tmp = (menu_item *)it->next();
				cout <<tmp->get_name() << ", " << tmp->get_price() << "--" <<tmp->get_description()<<endl;
			}
		}
	};
}
#endif
