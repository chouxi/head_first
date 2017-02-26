#ifndef _NY_CALM_PIZZA_H_
#define _NY_CALM_PIZZA_H_

#include <iostream>
#include <string>
using namespace std;
namespace pizza{
	class NY_calm_pizza:virtual public pizza
	{
	public:
		NY_calm_pizza(){
			name = "NY_calm and sauce Pizza";
			dough = "Thin crust dough";
			sauce = "Marinara Sauce";
			toppings.push_back("Grated Reggiano calm");
		};
		~NY_calm_pizza();
	};
}
#endif
