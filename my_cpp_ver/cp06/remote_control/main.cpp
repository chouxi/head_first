#include "light.h"
#include "stereo.h"
#include "remote_control.h"
#include "light_command.h"
#include "stereo_command.h"
using namespace control;
int main(){
	remote_control *remote = new remote_control();

	light *lib = new light("bathroom");
	light *lil = new light("living room");
	stereo *ste = new stereo("bedroom");

	light_on_command *libon = new light_on_command(lib);
	light_off_command *liboff = new light_off_command(lib);
	light_on_command *lilon = new light_on_command(lil);
	light_off_command *liloff = new light_off_command(lil);
	stereo_on_command *steon = new stereo_on_command(ste);
	stereo_off_command *steoff = new stereo_off_command(ste);

	remote->set_command(0,libon,liboff);
	remote->set_command(1,lilon,liloff);
	remote->set_command(2,steon,steoff);
	remote->on_button_press(0);
	remote->off_button_press(0);
	remote->on_button_press(1);
	remote->off_button_press(1);
	remote->on_button_press(2);
	remote->off_button_press(2);

	remote->undo_button_press();
	return 0;
}
