#ifndef _WHIP_H_
#define _WHIP_H_
#include <string>
#include "condiment.h"
#include "beverge.h"
namespace starbuzz{
	using namespace std;
	class whip : public condiment{
	public:
		whip(beverge *b):description("Whip"), cost(0.3){
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
