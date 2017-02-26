#ifndef _DIFF_STATES_H_
#define _DIFF_STATES_H_
#include "state.h"
#include "gumball.h"
#include <iostream>
using namespace std;
class no_quarter_state:public state{
public:
	no_quarter_state(gumball *gb):gbmachine(gb){}
	~no_quarter_state(){}
	void insert_quarter(){
		cout<<"You inserted a quarter"<<endl;
		gbmachine->set_state(gbmachine->get_hasquarter());
	}
	void eject_quarter(){
		cout<<"You haven't insert a quarter"<<endl;
	}
	void turn_crank(){
		cout<<"You turned but there's no quarter"<<endl;
	}
	void dispense(){
		cout<<"You need to pay first"<<endl;
	}
private:
	gumball *gbmachine;
};
class has_quarter_state:public state{
public:
	has_quarter_state(gumball *gb):gbmachine(gb){}
	~has_quarter_state();
	void insert_quarter(){
		cout<<"You cannot insert another quarter" <<endl;
	}
	void eject_quarter(){
		cout<<"Quarter returned" <<endl;
		gbmachine->set_state(gbmachine->get_noquarter());
	}
	void turn_crank(){
		cout<<"You turned" <<endl;
		gbmachine->set_state(gbmachine->get_sold());
	}
	void dispense(){
		cout<<"No gumball dispensed" <<endl;
	}
private:
	gumball *gbmachine;
};
class sold_state:public state{
public:
	sold_state(gumball *gb):gbmachine(gb){}
	~sold_state();
	void insert_quarter(){
		cout<<"Please wait, we're already giving you a gumball"<<endl;
	}
	void eject_quarter(){
		cout<<"Sorry, you already turned the crank"<<endl;
		gbmachine->set_state(gbmachine->get_noquarter());
	}
	void turn_crank(){
		cout<<"Turnning twice doesn't get you another gumball"<<endl;
		gbmachine->set_state(gbmachine->get_sold());
	}
	void dispense(){
		cout<<"A gumball coms rolling out the slot"<<endl;
		if(gbmachine->get_count() >0){
			gbmachine->set_state(gbmachine->get_noquarter());
		}else{
			cout << "Oops, out of gumballs"<<endl;
			gbmachine->set_state(gbmachine->get_soldout());
		}
	}
private:
	gumball *gbmachine;
};
class sold_out_state:public state{
public:
	sold_out_state(gumball *gb):gbmachine(gb){}
	~sold_out_state();
	void insert_quarter(){
		cout<<"You cannot insert a quarter, the machie is sold out" <<endl;
	}
	void eject_quarter(){
		cout<<"You cannot eject, you haven't insert a quarter yet" <<endl;
	}
	void turn_crank(){
		cout<<"You turned, but there's no gumball" <<endl;
	}
	void dispense(){
		cout<<"No gumball dispensed" <<endl;
	}
private:
	gumball *gbmachine;
};
#endif
