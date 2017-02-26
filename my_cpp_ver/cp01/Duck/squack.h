#ifndef _SQUACK_H_
#define _SQUACK_H_
#include <iostream>
#include "quack_behavior.h"
using namespace std;
namespace duck{
	class squack :public quack_behavior{
	public:
		void quack(){
			cout << "SQuack \n";
		}
	};
}
#endif
