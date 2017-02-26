#ifndef _DUCK_H_
#define _DUCK_H_
#include "fly_with_wing.h"
#include "fly_no_way.h"
#include "qquack.h"
#include "squack.h"
namespace duck{
	class Duck
	{
	public:
		void perform_fly(){
			qb->quack();
		}
		void perform_quack(){
			fb->fly();
		}
		~Duck(){
			delete qb;
			delete fb;
		}
	protected:
		quack_behavior *qb;
		fly_behavior *fb;
		Duck(fly_behavior *f, quack_behavior *q){
			fb = f;
			qb = q;
		}
	};
}
#endif
