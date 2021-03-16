#include "Includes.h"


int main(int argc, char *argv[])
{
	const Length window = {800, 600}; // isn't this static const?
	init(window); // :()
	setFontSize(48);
	const char* text = "DogeLib :3"; // :|
	Coord pos = coordDiv(window, 2);

	while(true){
		Ticks frameStart = getTicks();
		clear();

		

		draw();
		events(frameStart + TPF);
	}
	return 0;
}
