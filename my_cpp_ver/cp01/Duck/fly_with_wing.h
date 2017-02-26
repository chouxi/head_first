#ifndef _FLY_WITH_WING_H_
#define _FLY_WITH_WING_H_
#include <iostream>
#include "fly_behavior.h"
using namespace std;
namespace duck{
	class fly_with_wing :public fly_behavior{
	public:
		void fly(){
			cout << "Fly with wing \n";
		}
	};
}
#endif
