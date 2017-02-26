#ifndef _FLY_NO_WAY_H_
#define _FLY_NO_WAY_H_
#include <iostream>
#include "fly_behavior.h"
using namespace std;
namespace duck{
	class fly_no_way :public fly_behavior{
	public:
		void fly(){
			cout << "Fly no way \n";
		}
	};
}
#endif
