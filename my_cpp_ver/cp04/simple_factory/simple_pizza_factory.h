#ifndef _SIMPLE_PIZZA_FACTORY_H_
#define _SIMPLE_PIZZA_FACTORY_H_
#include "string.h"
#include "pizza.h"
#include "veggie_pizza.h"
#include "clam_pizza.h"
#include "cheese_pizza.h"
namespace pizza{
	class simple_pizza_factory
	{
	public:
		simple_pizza_factory(){}
		~simple_pizza_factory(){}
		pizza *create_pizza(string type){
			if(type == string("Cheese")){
				return new cheese_pizza();
			}
			else if(type == string("Clam")){
				return new clam_pizza();
			}
			else if(type == string("Veggie")){
				return new veggie_pizza();
			}
			else {
				return NULL;
			}
		}
	};
}
#endif
