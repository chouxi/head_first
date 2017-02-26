#include "singleton.h"
#include <cstdio>
using namespace single;
singleton * singleton::unique_instance = NULL;
int main(){

	singleton * s1 = singleton::get_instance();
	singleton * s2 = singleton::get_instance();
	printf("addr s1 %d; addr s2 %d\n",s1,s2);
	return 0;
}
