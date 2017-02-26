#ifndef _PIZZA_H_
#define _PIZZA_H_
#include <iostream>
#include <string>
#include <vector>
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
		std::vector<string> toppings;
		pizza(){}
		~pizza(){}
		void prepare(){
			cout << "Prearing " << this->name <<endl;
			cout << "Tossing dough "<<endl;
			cout << "Adding sauce "<<endl;
			cout << "Adding toppings "<<endl;
			for(int i = 0; i <toppings.size(); i ++){
				cout << " " << toppings[i] << endl;
			}
		}
		void bake(){
			cout << "Bake for 25 mins at 350" << endl;
		}
		void cut(){
			cout << "Cutting the pizza into digonal slices" <<endl;
		}
		void box(){
			cout << "Place the pizza in official PizzaStore box" << endl;
		}
	};
}
#endif
