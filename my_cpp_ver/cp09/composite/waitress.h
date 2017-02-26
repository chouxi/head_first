#ifndef _WAITRESS_H_
#define _WAITRESS_H_
#include "menu_comp.h"
#include <iostream>
using namespace std;
	class waitress
	{
	public:
		waitress(menu_comp *m_c):m_comp(m_c){
		}
		~waitress(){}
		void print_menu(){
			m_comp->print();
		}
	private:
		menu_comp *m_comp;
	};
#endif
