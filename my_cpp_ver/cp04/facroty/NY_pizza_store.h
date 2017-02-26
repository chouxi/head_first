#ifndef _NY_PIZZA_STORE_H_
#define _NY_PIZZA_STORE_H_
#include <string.h>
#include "NY_calm_pizza.h"
#include "NY_cheese_pizza.h"
#include "NY_veggies_pizza.h"
#include "pizza_store.h"
namespace pizza{
	class NY_pizza_store :virtual public pizza_store
	{
	public:
		NY_pizza_store(){}
		~NY_pizza_store(){}
		pizza * create_pizza(string type){
			if(type == string("Cheese")){
				return new NY_cheese_pizza();
			}else if(type == string("Calm")){
				return new NY_calm_pizza();
			}else if(type == string("Veggies")){
				return new NY_veggies_pizza();
			}else{
				return NULL;
			}
		}	
	};
}
#endif
