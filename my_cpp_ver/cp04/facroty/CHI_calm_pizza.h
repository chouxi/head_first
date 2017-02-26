#ifndef _CHI_CALM_PIZZA_H_
#define _CHI_CALM_PIZZA_H_

#include <iostream>
#include <string>
using namespace std;
namespace pizza{
	class CHI_calm_pizza:virtual public pizza
	{
	public:
		CHI_calm_pizza(){
			name = "CHI_calm and sauce Pizza";
			dough = "Thin crust dough";
			sauce = "Marinara Sauce";
			toppings.push_back("Grated Reggiano calm");
		};
		~CHI_calm_pizza();
	};
}
#endif
