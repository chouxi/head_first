#include "tea.h"
#include "coffee.h"
using namespace star_buzz;
int main(){
	caffeine_beverage *cbc = new coffee();
	caffeine_beverage *cbt = new tea();
	cbc->prepare_recipe();
	cbt->prepare_recipe();
	return 0;
}
