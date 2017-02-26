#ifndef _H_CURRENT_CONDITION_DISPLAY_
#define _H_CURRENT_CONDITION_DISPLAY_
#include "display_element.h"
#include "weather_data.h"


namespace weather{
	using namespace std;
	class current_condition_display : public observer, public display_element{
	private:
		float temperature;
		float humidity;
		float pressure;
		weather_data *wd;
	public:
		current_condition_display(weather_data *w_d){
			wd = w_d;
			w_d->register_observer(this);
		}
		void update(){
			temperature = wd->get_temperature();
			humidity = wd->get_humidity();
			pressure = wd->get_pressure();
			display();
		}
		void display(){
			cout << "Current Condition Display" <<endl;
			cout << "Tempreature " << temperature <<endl;
			cout << "Humidity " << humidity << endl;
			cout << "Pressure " << pressure << endl;
			cout << endl;
		}
	};
}
#endif
