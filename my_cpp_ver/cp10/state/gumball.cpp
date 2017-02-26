#include "gumball.h"
#include "diff_states.h"
gumball::gumball(int count){
	st = sold_out_states;
	sold_out_states = new sold_out_state(this);
	no_quarter_states = new no_quarter_state(this);
	has_quarter_states = new has_quarter_state(this);
	sold_states = new sold_state(this);
	this->count = count;
	if(this->count > 0){
		st = no_quarter_states;
	}
}
