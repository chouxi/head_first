#ifndef _NY_PIZZA_INTERGRADIENT_FACTORY_H_
#define _NY_PIZZA_INTERGRADIENT_FACTORY_H_
#include <iostream>
#include "pizza_intergradient_factory.h"
namespace pizza{
class NY_pizza_intergradient_factory : public pizza_intergradient_factory
{
public:
	NY_pizza_intergradient_factory();
	~NY_pizza_intergradient_factory();
	dough * create_dough(){
		return NY_dough();
	}
	sauce * create_sauce(){
		return NY_sauce();
	}
	cheese * create_cheese(){
		return new NY_cheese();
	}
	vector<veggies *> create_veggies(){
		vector<veggies *> vg;
		vg.push_back(new onion());
		vg.push_back(new mushroom());
		return vg;
	}
	calm * create_calm(){
		return new NY_calm();
	}
};
}
#endif
