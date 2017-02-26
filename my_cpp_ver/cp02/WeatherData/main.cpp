#include <iostream>
#include "observer.h"
#include "subject.h"
#include "weather_data.h"
#include "current_condition_display.h"
#include "heat_only_display.h"
using namespace std;
int main(){
	weather::weather_data wd;
	weather::current_condition_display ccd = weather::current_condition_display(&wd);
	weather::heat_only_display hod = weather::heat_only_display(&wd);

	wd.set_measurements(2.0,3.0,4.0);
	wd.remove_observer(&ccd);
	wd.set_measurements(3.0, 4.0, 5.0);
	return 0;
}
