#include "waitress.h"
using namespace iter;
int main(){
	pancake_house *ph = new pancake_house();
	dinner *d = new dinner();
	waitress *wt = new waitress(ph, d);
	wt->print_menu();
	return 0;
}
