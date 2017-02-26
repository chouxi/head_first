#include <iostream>

#include "pizza_store.h"
#include "NY_pizza_store.h"
#include "CHI_pizza_store.h"


using std::cout;
using std::endl;

int main()
{
    pizza::pizza_store *ps = new pizza::NY_pizza_store();
    ps->order_pizza("Cheese");
    cout << endl;
    ps = new pizza::CHI_pizza_store();
    ps->order_pizza("Cheese");
    return 0;
}
