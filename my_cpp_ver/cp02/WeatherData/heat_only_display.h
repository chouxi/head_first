#ifndef _HEAT_ONLY_DISPLAY_H_
#define _HEAT_ONLY_DISPLAY_H_
#include "display_element.h"
#include "weather_data.h"


namespace weather{
	using namespace std;
	class heat_only_display : public observer, public display_element{
	private:
		float temperature;
		weather_data *wd;
	public:
		heat_only_display(weather_data *w_d){
			wd = w_d;
			w_d->register_observer(this);
		}
		void update(){
			temperature = wd->get_temperature();
			display();
		}
		void display(){
			cout << "Heat only Display" <<endl;
			cout << "Tempreature " << temperature <<endl;
			cout << endl;
		}
	};
}
#endif
