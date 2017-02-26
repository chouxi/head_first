#ifndef _PIZZA_STORE_H_
#define _PIZZA_STORE_H_
#include "pizza.h"
namespace pizza{
	class pizza_store
	{
	public:
		pizza_store(){}
		~pizza_store(){}
		virtual pizza * create_pizza(string type) = 0;
		pizza *order_pizza(string type){
			pizza *pi = this->create_pizza(type);
			if(pi == NULL){
				return NULL;
			}
			pi->prepare();
			pi->bake();
			pi->cut();
			pi->box();
			return pi;
		}
	};
}
#endif
