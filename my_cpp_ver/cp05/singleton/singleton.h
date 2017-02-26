#ifndef _SINGLETON_H_
#define _SINGLETON_H_
#include <iostream>
namespace single{
	class singleton
	{
	private:
		singleton(){};
		static singleton *unique_instance;
		class grabo
		{
		public:
			~grabo(){
				if(singleton::unique_instance){
					delete singleton::unique_instance;
				}
			};
			
		};
	public:
		static singleton *get_instance(){
			if(unique_instance == NULL){
				unique_instance = new singleton();
			}
			return unique_instance;
		}
	};
}
#endif
