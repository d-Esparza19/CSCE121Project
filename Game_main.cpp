#include "std_lib_facilities_4.h"
#include "Game_window.h"

int main()
try {
	Game_window win {Point{0,0},1350,900,"Wifi Hero"};
	
		
	return gui_main();
}
catch(exception& e) {
	cerr << "exception: " << e.what() << '\n';
	return 1;
}
	catch (...) {
	cerr << "Some exception\n";
	return 2;
}