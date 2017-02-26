#ifndef _CHI_PIZZA_STORE_H_
#define _CHI_PIZZA_STORE_H_
#include <string.h>
#include "CHI_calm_pizza.h"
#include "CHI_cheese_pizza.h"
#include "CHI_veggies_pizza.h"
#include "pizza_store.h"
namespace pizza{
	class CHI_pizza_store :virtual public pizza_store
	{
	public:
		CHI_pizza_store(){}
		~CHI_pizza_store(){}
		pizza * create_pizza(string type){
			if(type == string("Cheese")){
				return new CHI_cheese_pizza();
			}else if(type == string("Calm")){
				return new CHI_calm_pizza();
			}else if(type == string("Veggies")){
				return new CHI_veggies_pizza();
			}else{
				return NULL;
			}
		}	
	};
}
#endif
