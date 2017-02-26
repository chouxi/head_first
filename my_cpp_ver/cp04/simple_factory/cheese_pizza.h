#ifndef _CHEESE_PIZZA_H_
#define _CHEESE_PIZZA_H_

#include <iostream>
#include <string>
using namespace std;
namespace pizza{
	class cheese_pizza:public pizza
	{
	public:
		cheese_pizza():name("Cheese Pizza"){};
		~cheese_pizza();
		void prepare(){
			cout << "Prepare " << this->name << endl;
		}
		void bake(){
			cout << "Bake " << this->name << endl;
		}
		void cut(){
			cout << "Cut " << this->name << endl;
		}
		void box(){
			cout << "Box " << this->name << endl;
		}
	private:
		string name;
	};
}
#endif
