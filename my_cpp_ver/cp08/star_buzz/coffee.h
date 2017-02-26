#ifndef _COFFEE_H_
#define _COFFEE_H_
#include <iostream>
#include "caffeine_beverage.h"
using namespace std;
namespace star_buzz{
	class coffee:virtual public caffeine_beverage
	{
	public:
		coffee(){}
		~coffee(){}
		void boil_water(){
			cout << "Boiling water" << endl;
		}
		void brew(){
			cout << "Dripping coffee through filter"<<endl;
		}
		void pour_in_cup(){
			cout << "Pouring into cup" << endl;
		}
		void add_condiments(){
			cout << "Adding sugar and milk" << endl;
		}
	};
}
#endif
