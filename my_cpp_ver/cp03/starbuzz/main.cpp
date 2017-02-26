#include <iostream>

#include "beverge.h"
#include "condiment.h"
#include "espresso.h"
#include "houseblend.h"
#include "mocha.h"
#include "whip.h"

using namespace std;
int main(){
	starbuzz::beverge *be = new starbuzz::espresso();
	starbuzz::beverge *mocha = new starbuzz::mocha(be);
	starbuzz::beverge *whip = new starbuzz::whip(mocha);

	cout << whip->get_description() <<endl;
	cout << whip->get_cost() <<endl;
	cout << endl;

	delete whip;
	delete mocha;
	delete be;
	return 0;
}
