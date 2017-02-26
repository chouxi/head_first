#ifndef _CAFFEINE_BEVERAGE_H_
#define _CAFFEINE_BEVERAGE_H_
#include <iostream>
using namespace std;
namespace star_buzz{
	class caffeine_beverage
	{
	public:
		caffeine_beverage(){}
		~caffeine_beverage(){}
		void prepare_recipe(){
			boil_water();
			brew();
			pour_in_cup();
			add_condiments();
		}
		void boil_water(){
			cout << "Boiling water" << endl;
		}
		virtual void brew() = 0;
		void pour_in_cup(){
			cout << "Pouring into cup" << endl;
		}
		virtual void add_condiments() = 0;
	};
}
#endif
