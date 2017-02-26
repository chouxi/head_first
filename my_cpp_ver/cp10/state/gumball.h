#ifndef _GUMBALL_H_
#define _GUMBALL_H_
#include "state.h"
#include <iostream>
using namespace std;
class gumball
{
public:
	gumball(int count){

	}
	~gumball(){}
	void insert_quarter(){
		this->st->insert_quarter();
	}
	void eject_quarter(){
		this->st->eject_quarter();
	}
	void turn_crank(){
		this->st->turn_crank();
		this->st->dispense();
	}
	void set_state(state *st){
		this->st = st;
	}
	void release_ball(){
		cout<<"A gumball rolling out of the slot"<<endl;
		if(count != 0){
			count -= 1;
		}
	}
	state *get_soldout(){
		return this->sold_out_states;
	}
	state *get_noquarter(){
		return this->no_quarter_states;
	}
	state *get_hasquarter(){
		return this->has_quarter_states;
	}
	state *get_sold(){
		return this->sold_states;
	}
	int get_count(){
		return this->count;
	}
private:
	state *sold_out_states;
	state *no_quarter_states;
	state *has_quarter_states;
	state *sold_states;
	state *st;
	int count;
};
#endif
