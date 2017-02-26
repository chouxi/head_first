#ifndef _HOUSEBLEND_H_
#define _HOUSEBLEND_H_
#include <string>
#include "beverge.h"
namespace starbuzz{
	using namespace std;
	class houseblend : public beverge{
	public:
		houseblend():description("House Blend Coffee"), cost(0.89){

		}
		string get_description(){
			return description;
		}
		double get_cost(){
			return cost;
		}
	private:
		string description;
		double cost;
	};
}
#endif
