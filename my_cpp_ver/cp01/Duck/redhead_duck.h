#ifndef _REDHEAD_DUCK_H_
#define _REDHEAD_DUCK_H_

#include "duck.h"
namespace duck{
	class redhead_duck : public Duck{
public:
		redhead_duck():Duck(new fly_no_way(), new squack()){
			
		}
	};
}

#endif
