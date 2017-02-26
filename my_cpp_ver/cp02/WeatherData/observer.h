#ifndef _OBSERVER_H_
#define _OBSERVER_H_

namespace weather{
	class observer{
	public:
		virtual void update() = 0;
	};
}

#endif
