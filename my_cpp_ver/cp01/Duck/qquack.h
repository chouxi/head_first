#ifndef _QQUACK_H_
#define _QQUACK_H_
#include <iostream>
#include "quack_behavior.h"
using namespace std;
namespace duck{
	class qquack :public quack_behavior{
	public:
		void quack(){
			cout << "QQuack \n";
		}
	};
}
#endif
