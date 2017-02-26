#ifndef _PIZZA_H_
#define _PIZZA_H_
#include <iostream>
#include <string>
#include <vector>
#include "veggies.h"
using std::string;
using std::cout;
using std::endl;
namespace pizza{
	class pizza
	{
	public:
		string name;
		string dough;
		string sauce;
		vector<veggies *> vg;
		pizza(){}
		~pizza(){}
		virtual void prepare() = 0;
		void bake(){
			cout << "Bake for 25 mins at 350" << endl;
		}
		void cut(){
			cout << "Cutting the pizza into digonal slices" <<endl;
		}
		void box(){
			cout << "Place the pizza in official PizzaStore box" << endl;
		}
		void set_name(string name){
			this->name = name;
		}
		void get_name(){
			return name;
		}
		string printpizza(){}
	};
}
#endif
