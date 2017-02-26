#ifndef _VEGGIE_PIZZA_H_
#define _VEGGIE_PIZZA_H_

#include <iostream>
#include <string>
using namespace std;
namespace pizza{
	class veggie_pizza:public pizza
	{
	public:
		veggie_pizza():name("Veggie Pizza"){};
		~veggie_pizza();
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
