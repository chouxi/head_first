#ifndef _PIZZA_H_
#define _PIZZA_H_

namespace pizza{
	class pizza
	{
	public:
		pizza(){}
		~pizza(){}
		virtual void prepare() = 0;
		virtual void bake() = 0;
		virtual void cut() = 0;
		virtual void box() = 0;
		
	};
}
#endif
