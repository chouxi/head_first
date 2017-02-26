#ifndef _SUBJECT_H_
#define _SUBJECT_H_
#include "observer.h"

namespace weather{
	class subject{
	public:
		virtual void register_observer(observer *o) = 0;
		virtual void remove_observer(observer *o) = 0;
		virtual void notify_observers() = 0;
	};
}
#endif
