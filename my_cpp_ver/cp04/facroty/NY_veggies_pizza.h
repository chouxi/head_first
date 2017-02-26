#ifndef _NY_VEGGIES_PIZZA_H_
#define _NY_VEGGIES_PIZZA_H_

#include <iostream>
#include <string>
using namespace std;
namespace pizza{
	class NY_veggies_pizza:virtual public pizza
	{
	public:
		NY_veggies_pizza(){
			name = "NY_veggies and sauce Pizza";
			dough = "Thin crust dough";
			sauce = "Marinara Sauce";
			toppings.push_back("Grated Reggiano veggies");
		};
		~NY_veggies_pizza();
	};
}
#endif
