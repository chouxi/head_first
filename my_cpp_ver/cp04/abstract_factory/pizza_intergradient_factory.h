#ifndef _PIZZA_INTERGRADIENT_FACTORY_H_
#define _PIZZA_INTERGRADIENT_FACTORY_H_
#include <vector>
using std::vector;
namespace pizza{
class pizza_intergradient_factory
{
public:
	pizza_intergradient_factory();
	~pizza_intergradient_factory();
	virtual cheese * create_cheese() = 0;
	virtual vector <veggies *> create_veggies() = 0;
	virtual calm * create_calm() = 0;
};
}
#endif
