#include "gumball.h"
int main(){
	gumball *gbmachine = new gumball(10);
	gbmachine->insert_quarter();
	gbmachine->turn_crank();
	gbmachine->eject_quarter();
	gbmachine->insert_quarter();
	gbmachine->eject_quarter();
	return 0;
}
