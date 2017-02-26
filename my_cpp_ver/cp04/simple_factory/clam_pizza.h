#ifndef _CLAM_PIZZA_H_
#define _CLAM_PIZZA_H_
#include <iostream>
#include <string>
using namespace std;
namespace pizza{
	class clam_pizza:public pizza
	{
	public:
		clam_pizza():name("Clam Pizza"){};
		~clam_pizza();
		void prepare(){
			cout << "Prepare " << this->name << endl;
		}
		void bake(){
			cout << "Bake " << this->name << endl;
		}
		void cut(){
			cout << "Cut " << this->name << endl;
		}
		void box(){
			cout << "Box " << this->name << endl;
		}
	private:
		string name;
	};
}
#endif
