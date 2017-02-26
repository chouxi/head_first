#ifndef _ITERATE_H_
#define _ITERATE_H_
using namespace std;
#include <vector>
#include "menu_item.h"
namespace iter{
	class iterate
	{
	public:
		iterate(){}
		virtual ~iterate(){}
		virtual int has_next() = 0;
		virtual menu_item *next() = 0;
	};
	class pancake_iterate : public iterate
	{
	public:
		pancake_iterate(vector<menu_item *> &mv){
			menu_vector_inter = mv.begin();
			end = mv.end();
		}
		~pancake_iterate(){}
		int has_next(){
			return (int) (menu_vector_inter!= end);
		}
		menu_item *next(){
			menu_item *tmp = *menu_vector_inter;
			menu_vector_inter ++;
			return tmp;
		}
	private:
		vector<menu_item *>::const_iterator menu_vector_inter;
		vector<menu_item *>::const_iterator end;
	};
	class dinner_iterate :public iterate
	{
	public:
		dinner_iterate(menu_item *mi[], int count):menu_list(mi), count(count), index(0){
		}
		~dinner_iterate(){}
		int has_next(){
			return (index < count) && (menu_list[index] != NULL);
		}
		menu_item *next(){
			menu_item *tmp = menu_list[index];
			index ++;
			return tmp;
		}
	private:
		menu_item ** menu_list;
		int count;
		int index;
	};
}
#endif
