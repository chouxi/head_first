#include "duck.h"
#include "turkey.h"
#include "turkey_adapter.h"
using namespace adapter;
int main(){
	mallard_duck *md = new mallard_duck();
	wild_turkey *wt = new wild_turkey();
	duck *ta = new turkey_adapter(wt);
	wt->gobble();
	wt->fly();

	ta->quack();
	ta->fly();
	return 0;
}
