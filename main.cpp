#include <unistd.h>
#include <X11/Xlib.h>


int
main(void) {

	Display* MainDisplay = XOpenDisplay(NULL);
	Window	 RootWindow = XDefaultRootWindow(MainDisplay);

	Window MainWindow = XCreateSimpleWindow(MainDisplay, RootWindow, 0, 0, 800, 600, 0, 0, 0xffffffff);
	XMapWindow(MainDisplay, MainWindow);
	XFlush(MainDisplay);

	for (;;) {

		sleep(1);
	}
}
