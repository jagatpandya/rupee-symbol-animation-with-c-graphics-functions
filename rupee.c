#include <graphics.h>
  
int main() {
    int gdriver = DETECT, gmode;
  
    // Initialize the graphics mode and local variables
    initgraph(&gdriver, &gmode, NULL);
    
    setbkcolor(WHITE);
  
    for (int i=0; i<454; i++) {
    	setcolor(BLACK);
        line(0+i, 125, 186+i, 125);
    	line(93+i, 125, 93+i, 175);
	    arc(43+i, 175, 0, 95, 50);
	    line(0+i, 225, 38+i, 225);
    	line(0+i, 225, 118+i, 375);
    	line(0+i, 160, 186+i, 160);

        // Hold the program for 20 seconds
        delay(20);
  
        // Clear the screen
        cleardevice();
    }
    getch();
    
    // Close the graphics mode
    closegraph();
    return 0;
}
