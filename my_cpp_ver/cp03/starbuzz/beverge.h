#ifndef _BEVERGE_H_
#define _BEVERGE_H_
#include <string>
namespace starbuzz{
	using namespace std;
	class beverge{
	public:
		virtual string get_description() = 0;
		virtual double get_cost() = 0;
	};
}
#endif
