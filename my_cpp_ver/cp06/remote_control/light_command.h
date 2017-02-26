#ifndef _LIGHT_COMMAND_H_
#define _LIGHT_COMMAND_H_
#include "command.h"
namespace control{
	class light_on_command : public command
	{
	public:
		light_on_command(light *li){
			this->li = li;
		}
		~light_on_command();
		void excute(){
			li->on();
		}
		void undo(){
			li->off();
		}
	private:
		light *li;
	};
	class light_off_command :public command
	{
	public:
		light_off_command(light *li){
			this->li = li;
		}
		~light_off_command();
		void excute(){
			li->off();
		}
		void undo(){
			li->on();
		}
	private:
		light *li;
	};
}
#endif
