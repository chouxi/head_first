#ifndef _LIGHT_H_
#define _LIGHT_H_
#include <iostream>
#include <string>
using namespace std;
namespace control{
	class light
	{
	public:
		light(string name){
			this->name = name;
		}
		~light();
		void on(){
			cout<< name << " light is on"<< endl;
		}
		void off(){
			cout << name << " light is off"<< endl;
		}
	private:
		string name;
	};
}
#endif
