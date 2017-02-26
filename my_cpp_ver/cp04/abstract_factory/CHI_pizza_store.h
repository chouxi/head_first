#ifndef _CHI_PIZZA_STORE_H_
#define _CHI_PIZZA_STORE_H_
#include <string.h>
#include "calm_pizza.h"
#include "cheese_pizza.h"
#include "veggies_pizza.h"
#include "pizza_store.h"
namespace pizza{
	class CHI_pizza_store :virtual public pizza_store
	{
	public:
		CHI_pizza_store(){}
		~CHI_pizza_store(){}
		pizza * create_pizza(string type){
			pizza pi = NULL;
			pizza_intergradient_factory *pif = new pizza::CHI_pizza_intergradient_factory();
			if(type == string("Cheese")){
				pi = new cheese_pizza(pif);
				pi.set_name("CHI cheese pizza");
			}else if(type == string("Calm")){
				pi = new calm_pizza(pif);
				pi.set_name("CHI calm pizza");
			}else if(type == string("Veggies")){
				pi = new veggies_pizza();
				pi.set_name("CHI veggies pizza");
			}
			return pi;
		}
	};
}
#endif
