#ifndef _TEA_H_
#define _TEA_H_
#include <iostream>
#include "caffeine_beverage.h"
using namespace std;
namespace star_buzz{
	class tea: virtual public caffeine_beverage
	{
	public:
		tea(){}
		~tea(){}
		void boil_water(){
			cout << "Boiling water" << endl;
		}
		void brew(){
			cout << "Stepping tea through filter"<<endl;
		}
		void pour_in_cup(){
			cout << "Pouring into cup" << endl;
		}
		void add_condiments(){
			cout << "Adding lemon" << endl;
		}
	};
}
#endif
