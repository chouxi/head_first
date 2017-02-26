#ifndef _TURKEY_H_
#define _TURKEY_H_
#include <iostream>
using namespace std;
namespace adapter{
	class turkey
	{
	public:
		turkey(){}
		~turkey();
		virtual void gobble() = 0;
		virtual void fly() = 0;
	};
	class wild_turkey :virtual public turkey
	{
	public:
		wild_turkey(){}
		~wild_turkey();
		void gobble(){
			cout << "gobble" <<endl;
		}
		void fly(){
			cout << "flyig short distance" <<endl;
		}
	};
}
#endif
