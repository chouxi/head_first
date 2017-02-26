#ifndef _CLAM_PIZZA_H_
#define _CLAM_PIZZA_H_

#include <iostream>
#include <string>
#include "pizza_intergradient_factory.h"
using namespace std;
namespace pizza{
	class clam_pizza:virtual public pizza
	{
	public:
		clam_pizza(pizza_intergradient_factory *pif){
			this->pif = pif;
		}
		~clam_pizza();
		void prepare(){
			cout << "Prepare " << name << endl;
			dough = pif->create_dough();
			sauce = pif->create_sauce();
			clam = pif->create_clam();
		}
	private:
		pizza_intergradient_factory *pif;
	};
}
#endif
