#ifndef _CHI_PIZZA_INTERGRADIENT_FACTORY_H_
#define _CHI_PIZZA_INTERGRADIENT_FACTORY_H_
#include <iostream>
#include "pizza_intergradient_factory.h"
namespace pizza{
class CHI_pizza_intergradient_factory : public pizza_intergradient_factory
{
public:
	CHI_pizza_intergradient_factory();
	~CHI_pizza_intergradient_factory();
	dough * create_dough(){
		return CHI_dough();
	}
	sauce * create_sauce(){
		return CHI_sauce();
	}
	cheese * create_cheese(){
		return new CHI_cheese();
	}
	vector<veggies *> create_veggies(){
		vector<veggies *> vg;
		vg.push_back(new onion());
		return vg;
	}
	calm * create_calm(){
		return new CHI_calm();
	}
};
}
#endif
