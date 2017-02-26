#ifndef _STEREO_COMMAND_H_
#define _STEREO_COMMAND_H_
#include "command.h"
namespace control{
	class stereo_on_command : public command
	{
	public:
		stereo_on_command(stereo *ste){
			this->ste = ste;
		}
		~stereo_on_command();
		void excute(){
			ste->on();
			ste->setmode("dvd");
			ste->setvol(12);
		}
		void undo(){
			ste->off();
		}
	private:
		stereo *ste;
	};
	class stereo_off_command :public command
	{
	public:
		stereo_off_command(stereo *ste){
			this->ste = ste;
		}
		~stereo_off_command();
		void excute(){
			ste->off();
		}
		void undo(){
			ste->on();
			ste->setmode(ste->getmode());
			ste->setvol(ste->getvol());
		}
	private:
		stereo *ste;
	};
}
#endif
