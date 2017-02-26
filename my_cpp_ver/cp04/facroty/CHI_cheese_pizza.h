#ifndef _CHI_CHEESE_PIZZA_H_
#define _CHI_CHEESE_PIZZA_H_

#include <iostream>
#include <string>
using namespace std;
namespace pizza{
	class CHI_cheese_pizza:virtual public pizza
	{
	public:
		CHI_cheese_pizza(){
			name = "CHI_Cheese and deep dish Pizza";
			dough = "Extra Thick crust dough";
			sauce = "Pluam tomato Sauce";
			toppings.push_back("Shreded Mozzarella Cheese");
		};
		~CHI_cheese_pizza();
		void cut(){
			cout<< "Cutting the pizza into square slices" <<endl;
		}
	};
}
#endif
