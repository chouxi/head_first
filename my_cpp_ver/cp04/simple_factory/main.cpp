#include <iostream>
#include "pizza_store.h"
#include "simple_pizza_factory.h"
using namespace std;
int main(){
	pizza::simple_pizza_factory *spf = new pizza::simple_pizza_factory();
	pizza::pizza_store ps = pizza::pizza_store(spf);
	ps.order_pizza("Cheese");
	ps.order_pizza("Veggie");
	ps.order_pizza("Clam");
	return 0;
}
