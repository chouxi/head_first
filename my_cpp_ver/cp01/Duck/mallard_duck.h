#ifndef _MALLARD_DUCK_H_
#define _MALLARD_DUCK_H_

#include "duck.h"
namespace duck{
	class mallard_duck : public Duck{
public:
		mallard_duck():Duck(new fly_with_wing(), new qquack()){

		}
	};
}

#endif
