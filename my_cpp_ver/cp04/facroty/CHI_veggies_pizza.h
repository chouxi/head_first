#ifndef _CHI_VEGGIES_PIZZA_H_
#define _CHI_VEGGIES_PIZZA_H_

#include <iostream>
#include <string>
using namespace std;
namespace pizza{
	class CHI_veggies_pizza:virtual public pizza
	{
	public:
		CHI_veggies_pizza(){
			name = "CHI_veggies and sauce Pizza";
			dough = "Thin crust dough";
			sauce = "Marinara Sauce";
			toppings.push_back("Grated Reggiano veggies");
		};
		~CHI_veggies_pizza();
	};
}
#endif
