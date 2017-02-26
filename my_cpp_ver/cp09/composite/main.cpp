#include "menu.h"
#include "menu_item.h"
#include "waitress.h"
int main(){
	menu_comp * pancakehouse = new menu("Pancake House Menu", "Breakfast");
	menu_comp * dinner = new menu("Dinner Menu", "Lunch");
	menu_comp * cafe = new menu("Cafe House", "Dinner");
	menu_comp * dessert = new menu("Dessert House", "Dessert");

	menu_comp * all  = new menu("All menu", "Combined all menus");
	all->add(pancakehouse);
	all->add(dinner);
	all->add(cafe);
	dinner->add(new menu_item("Pasta", "Spaghetti with Marinara Sauce", true, 3.89));
	dinner->add(dessert);
	dessert->add(new menu_item("Apple pie", "Apple pie with flucky crust", true, 3.59));
	waitress *wait = new waitress(all);
	wait->print_menu();
	return 0;
}
