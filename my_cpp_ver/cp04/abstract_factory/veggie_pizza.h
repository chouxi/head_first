#ifndef _VIGGIES_PIZZA_H_
#define _VIGGIES_PIZZA_H_

#include <iostream>
#include <string>
#include "pizza_intergradient_factory.h"
using namespace std;
namespace pizza{
	class viggies_pizza:virtual public pizza
	{
	public:
		viggies_pizza(pizza_intergradient_factory *pif){
			this->pif = pif;
		}
		~viggies_pizza();
		void prepare(){
			cout << "Prepare " << name << endl;
			dough = pif->create_dough();
			sauce = pif->create_sauce();
			viggies = pif->create_viggies();
		}
	private:
		pizza_intergradient_factory *pif;
	};
}
#endif
