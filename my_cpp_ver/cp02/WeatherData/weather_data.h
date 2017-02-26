#ifndef _WEATHER_DATA_H_
#define _WEATHER_DATA_H_
#include <vector>
#include <algorithm>
#include "observer.h"
#include "subject.h"
namespace weather{
	using namespace std;
	class weather_data :public subject{
	private:
		vector<observer *> observers;
		float temperature;
		float humidity;
		float pressure;
	public:
		void register_observer(observer *o){
			observers.push_back(o);
		}
		void remove_observer(observer *o){
			vector<observer *>::iterator found = find(observers.begin(), observers.end(), o);
			if(found != observers.end()){
				observers.erase(found);
			}
		}
		void notify_observers(){
			for(vector<observer *>::iterator it = observers.begin(); it != observers.end(); it ++){
				(*it)->update();
			}
		}
		void measurement_change(){
			notify_observers();
		}
		float get_temperature(){
			return temperature;
		}
		float get_humidity(){
			return humidity;
		}
		float get_pressure(){
			return pressure;
		}
		void set_measurements(float t, float h, float p ){
			temperature = t;
			humidity = h;
			pressure = p;
			measurement_change();
		}
	};
}
#endif
