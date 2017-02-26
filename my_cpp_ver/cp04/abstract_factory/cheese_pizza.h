#ifndef _CHEESE_PIZZA_H_
#define _CHEESE_PIZZA_H_

#include <iostream>
#include <string>
#include "pizza_intergradient_factory.h"
using namespace std;
namespace pizza{
	class cheese_pizza:virtual public pizza
	{
	public:
		cheese_pizza(pizza_intergradient_factory *pif){
			this->pif = pif;
		}
		~cheese_pizza();
		void prepare(){
			cout << "Prepare " << name << endl;
			dough = pif->create_dough();
			sauce = pif->create_sauce();
			cheese = pif->create_cheese();
		}
	private:
		pizza_intergradient_factory *pif;
	};
}
#endif
