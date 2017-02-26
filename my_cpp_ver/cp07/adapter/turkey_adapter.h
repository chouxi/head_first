#ifndef _TURKEY_ADAPTER_H_
#define _TURKEY_ADAPTER_H_
#include "turkey.h"
#include "duck.h"
namespace adapter{
	class turkey_adapter :public duck
	{
	public:
		turkey_adapter(turkey *t){
			this->t = t;
		}
		~turkey_adapter();
		void quack(){
			t->gobble();
		}
		void fly(){
			for(int i = 0; i < 5;i ++){
				t->fly();
			}
		}
	private:
		turkey *t;
	};
}
#endif
