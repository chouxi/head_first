#ifndef _REMOTE_CONTROL_H_
#define _REMOTE_CONTROL_H_
#include "command.h"
#include <vector>
#include <string>
using namespace std;
namespace control{
	class remote_control
	{
	public:
		remote_control(){
			for(int i = 0;i < 3; i ++){
				this->oncommands.push_back(NULL);
				this->offcommands.push_back(NULL);
			}
			this->undocmd = NULL;
		}
		~remote_control(){}
		void set_command(int slot, command *oncmd, command *offcmd){
			oncommands[slot] = oncmd;
			offcommands[slot] = offcmd;
		}
		void on_button_press(int slot){
			if(oncommands[slot] == NULL){
				return;
			}
			oncommands[slot]->excute();
			undocmd = oncommands[slot];
		}
		void off_button_press(int slot){
			if(offcommands[slot] == NULL){
				return;
			}
			offcommands[slot]->excute();
			undocmd = offcommands[slot];
		}
		void undo_button_press(){
			undocmd->undo();
		}
	private:
		vector<command *> oncommands;
		vector<command *> offcommands;
		command * undocmd;
	};
}
#endif
