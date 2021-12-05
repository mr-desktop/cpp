#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <dos.h>
#include <conio.h>

main(void){ int Aa = DETECT, aA, error;
	    int x=1,y=1,xb=1,yb=1,xf=0,yf=0;

	    // Cargando Las Interfaces
	    initgraph(&Aa, &aA, "");
	    error = graphresult();
	    if(error!=grOk)
	      { printf("Graphics error: %s\n", grapherrormsg(error));
		printf("Press any key to halt:");
		getch();
		exit(1); }
	    // Cargada Las Interfaces
	    xf = getmaxx();
	    yf = getmaxy();
	    setcolor(9);
	    x=xf/2; y=yf/2;
	    while(!kbhit()){ while(xb=1){ x+=10;
			     while(yb=1){ y+=10;
					  setfillstyle(6,15);
					  fillellipse(x,y,x+20,y+20);
					 } }
			    }

	    // Fin
	    getch();
	    closegraph();
	    return 0; }