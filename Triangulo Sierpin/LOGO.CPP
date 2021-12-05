#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

int main(void)
{  int gdriver = DETECT, gmode, errorcode;
   int x, y;
   int a=0,b=0,c=0,d=0,ex=0,ey=0,fx=0,fy=0;
   initgraph(&gdriver, &gmode, "");
   errorcode = graphresult();
   if (errorcode != grOk){ printf("Error: %s\n", grapherrormsg(errorcode));
      getch();
      exit(1); }

   x = getmaxx();
   y = getmaxy();

   // Primer Triangulo
   setcolor(9);
   a=x/2; b=x; c=y; d=0;
   line(b, c, a, d);
   line(d, c, a, d);
   line(d, c, b, c);

   // Segundo Triangulo
   setcolor(4);
   a=x-(x/4); b=x/4; c=y/2; d=x/2;
   line(b ,c ,a, c);
   line(d ,y, b ,c);
   line(a ,c, d ,y);

   // Tercer Triangulo 3 Veces
   setcolor(10);
   a=x*0.374; b=y*0.75; c=x*0.25; d=x*0.126;
   line(a, b, c, y);
   line(a, b, d, b);
   line(d, b, c, y);

   ey=240; ex=160; a+=ex; b-=ey; c+=ex; d+=ex;
   line(a, b, c, y-ey);
   line(a, b, d, b);
   line(d, b, c, y-ey);

   ex=160; a+=ex; b+=ey; c+=ex; d+=ex;
   line(a, b, c, y);
   line(a, b, d, b);
   line(d, b, c, y);

   // Cuarto Triangulo (3*3) Veces
   setcolor(15);
   a=(a/2); b=(b/2); c=(c/2); d=(d/2);
   line(a, b, c, (y/2));
   line(a, b, d, b);
   line(d, b, c, (y/2));

   ex=160; ey=0; a+=ex; b-=ey; c+=ex; d+=ex;
   line(a, b, c, (y/2)-ey);
   line(a, b, d, b);
   line(d, b, c, (y/2)-ey);

   ex=-(ex/2); ey=120; a+=ex; b-=ey; c+=ex; d+=ex;
   line(a, b, c, (y/2)-ey);
   line(a, b, d, b);
   line(d, b, c, (y/2)-ey);

   fx=0; fy=-240; a=(x*0.374/2)+fx; b=(y*0.75/2)-fy; c=(x*0.25/2)+fx; d=(x*0.126/2)+fx;
   line(a, b, c, ((y/2)-fy));
   line(a, b, d, b);
   line(d, b, c, ((y/2)-fy));

   ex=160; ey=0; a+=ex; b-=ey; c+=ex; d+=ex;
   line(a, b, c, ((y/2)-ey-fy));
   line(a, b, d, b);
   line(d, b, c, ((y/2)-ey-fy));

   ex=-(ex/2); ey=120; a+=ex; b-=ey; c+=ex; d+=ex;
   line(a, b, c, ((y/2)-ey-fy));
   line(a, b, d, b);
   line(d, b, c, ((y/2)-ey-fy));

   fx=320; fy=-240; a=(x*0.374/2)+fx; b=(y*0.75/2)-fy; c=(x*0.25/2)+fx; d=(x*0.126/2)+fx;
   line(a, b, c, ((y/2)-fy));
   line(a, b, d, b);
   line(d, b, c, ((y/2)-fy));

   ex=160; ey=0; a+=ex; b-=ey; c+=ex; d+=ex;
   line(a, b, c, ((y/2)-ey-fy));
   line(a, b, d, b);
   line(d, b, c, ((y/2)-ey-fy));

   ex=-(ex/2); ey=120; a+=ex; b-=ey; c+=ex; d+=ex;
   line(a, b, c, ((y/2)-ey-fy));
   line(a, b, d, b);
   line(d, b, c, ((y/2)-ey-fy));

   getch();
   closegraph();
   return 0;
}

