#include "mallard_duck.h"
#include "redhead_duck.h"
using namespace std;
int main(){
	duck::Duck *d1 = new duck::mallard_duck();
	duck::Duck *d2 = new duck::redhead_duck();

	d1->perform_fly();
	d1->perform_quack();

	d2->perform_fly();
	d2->perform_quack();
	return 0;
}
