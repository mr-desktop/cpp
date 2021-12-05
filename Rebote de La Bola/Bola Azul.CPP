#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <dos.h>
#include <conio.h>

main(void){ int Aa = DETECT, aA, error;
	    int x=1,y=1,xb=1,yb=1,xf=0,yf=0,mm;

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

	    while(!kbhit()){ if(xb==1){ x+=10; }
			     if(xb==0){ x-=10; }
			     if(yb==1){ y+=10; }
			     if(yb==0){ y-=10; }

			     delay(60);
			     cleardevice();

			     setcolor(9);
			     ellipse(x, y, 0, 360,5,25);
			     setcolor(9);
			     ellipse(x, y, 0, 360,15,25);
			     setcolor(9);
			     ellipse(x, y, 0, 360,25,25);

			     mm=29;

			     if(x<1+mm){ xb=1; }
			     if(x>=xf-mm-2){ xb=0; }
			     if(y<1+mm){ yb=1; }
			     if(y>=yf-mm-2){ yb=0; }

			    }

	    // Fin
	    closegraph();
	    return 0; }