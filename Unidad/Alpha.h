#include<process.h>
#include<ctype.h>
 int  bb;
char *aa;
void Box(int aA, int aB, int aC, int aD, int aE, int aF)
      { int con; char a;
	aA++; aB+=2;
	aC++; aD+=2;
	for(con=aC; con<=aD; con++)
	 { gotoxy(aA,con); textcolor(aE); cprintf("%c",186);
	   gotoxy(aB,con); textcolor(aE); cprintf("%c",186); }
	for(con=aA; con<=aB; con++)
	 { gotoxy(con,aC); textcolor(aE); cprintf("%c",205);
	   gotoxy(con,aD); textcolor(aE); cprintf("%c",205); }
	gotoxy(aA,aC); textcolor(aF); cprintf("%c",201);
	gotoxy(aA,aD); textcolor(aF); cprintf("%c",200);
	gotoxy(aB,aC); textcolor(aF); cprintf("%c",187);
	gotoxy(aB,aD); textcolor(aF); cprintf("%c",188); }