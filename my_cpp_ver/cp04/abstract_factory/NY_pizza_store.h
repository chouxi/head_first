#ifndef _NY_PIZZA_STORE_H_
#define _NY_PIZZA_STORE_H_
#include <string.h>
#include "calm_pizza.h"
#include "cheese_pizza.h"
#include "veggies_pizza.h"
#include "pizza_store.h"
namespace pizza{
	class NY_pizza_store :virtual public pizza_store
	{
	public:
		NY_pizza_store(){}
		~NY_pizza_store(){}
		pizza * create_pizza(string type){
			pizza pi = NULL;
			pizza_intergradient_factory *pif = new pizza::NY_pizza_intergradient_factory();
			if(type == string("Cheese")){
				pi = new cheese_pizza(pif);
				pi.set_name("NY cheese pizza");
			}else if(type == string("Calm")){
				pi = new calm_pizza(pif);
				pi.set_name("NY calm pizza");
			}else if(type == string("Veggies")){
				pi = new veggies_pizza();
				pi.set_name("NY veggies pizza");
			}
			return pi;
		}
	};
}
#endif
