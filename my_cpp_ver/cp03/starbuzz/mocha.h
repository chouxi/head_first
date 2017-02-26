#ifndef _MOCHA_H_
#define _MOCHA_H_
#include <string>
#include "condiment.h"
#include "beverge.h"
namespace starbuzz{
	using namespace std;
	class mocha : public condiment{
	public:
		mocha(beverge *b):description("Mocha"), cost(0.2){
			this->be = b;
		}
		string get_description(){
			return be->get_description() +"," + this->description;
		}
		double get_cost(){
			return be->get_cost() + this->cost;
		}
	private:
		beverge *be;
		string description;
		double cost;
	};
}
#endif
