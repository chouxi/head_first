#ifndef _MENU_COMP_H_
#define _MENU_COMP_H_
#include <string>
using namespace std;
class menu_comp
{
public:
	class unsuported_oper{};
	menu_comp(){}
	virtual ~menu_comp(){}
	virtual void add(menu_comp * m_c){
		throw unsuported_oper();
	}
	virtual void remove(menu_comp * m_c){
		throw unsuported_oper();
	}
	virtual menu_comp * get_child(){
		throw unsuported_oper();
	}
	virtual string get_name(){
		throw unsuported_oper();
	}
	virtual string get_description(){
		throw unsuported_oper();
	}
	virtual double get_price(){
		throw unsuported_oper();
	}
	virtual bool is_veg(){
		throw unsuported_oper();
	}
	virtual void print(){
		throw unsuported_oper();
	}
};
#endif
