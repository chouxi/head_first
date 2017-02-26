#ifndef _NY_CHEESE_PIZZA_H_
#define _NY_CHEESE_PIZZA_H_

#include <iostream>
#include <string>
using namespace std;
namespace pizza{
	class NY_cheese_pizza:virtual public pizza
	{
	public:
		NY_cheese_pizza(){
			name = "NY_Cheese and sauce Pizza";
			dough = "Thin crust dough";
			sauce = "Marinara Sauce";
			toppings.push_back("Grated Reggiano Cheese");
		};
		~NY_cheese_pizza();
	};
}
#endif
