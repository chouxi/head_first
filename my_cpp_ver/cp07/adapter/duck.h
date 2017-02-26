#ifndef _DUCK_H_
#define _DUCK_H_
#include <iostream>
using namespace std;
namespace adapter{
	class duck
	{
	public:
		duck(){}
		~duck();
		virtual void quack() = 0;
		virtual void fly() = 0;
	};
	class mallard_duck :public duck
	{
	public:
		mallard_duck(){}
		~mallard_duck();
		void quack(){
			cout << "quack" <<endl;
		}
		void fly(){
			cout << "flyig" <<endl;
		}
	};
}
#endif
