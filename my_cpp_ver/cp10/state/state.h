#ifndef _STATE_H_
#define _STATE_H_
class state{
public:
	state(){}
	virtual ~state() = 0;
	virtual void insert_quarter() = 0;
	virtual void eject_quarter() = 0;
	virtual void turn_crank() = 0;
	virtual void dispense() = 0;
};
#endif
