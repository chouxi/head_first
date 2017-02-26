#ifndef _COMMAND_H_
#define _COMMAND_H_
namespace control{
	class command
	{
	public:
		command(){}
		~command(){}
		virtual void excute() = 0;
		virtual void undo() = 0;
	};
}
#endif
