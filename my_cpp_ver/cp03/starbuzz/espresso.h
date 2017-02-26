#ifndef _ESPRESSO_H_
#define _ESPRESSO_H_
#include <string>
#include "beverge.h"
namespace starbuzz{
	using namespace std;
	class espresso : public beverge{
	public:
		espresso():description("Espresso"), cost(1.99){

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
