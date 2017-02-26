#ifndef _STEREO_H_
#define _STEREO_H_
#include <iostream>
#include <string>
using namespace std;
namespace control{
	class stereo
	{
	public:
		stereo(string name){
			this->name = name;
		}
		~stereo();
		void on(){
			cout<< name << " stereo is on"<< endl;
		}
		void off(){
			cout << name << " stereo is off"<< endl;
		}
		void setmode(string mode){
			this->mode = mode;
			cout << name << " stereo is "<< mode <<" mode"<< endl;
		}
		void setvol(int vol){
			this->vol = vol;
			cout << name << " stereo vol to " << vol << endl;
		}
		int getvol(){
			return this->vol;
		}
		string getmode(){
			return this->mode;
		}
	private:
		string name;
		string mode;
		int vol;
	};
}
#endif
