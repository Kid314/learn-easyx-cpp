#include<iostream>
#include<easyx.h>

void dropshape()
{
	putpixel(50, 50, RED);

	setlinecolor(BLUE);
	setlinestyle(PS_SOLID, 3);
	line(0, 0, getwidth(), getheight());

	rectangle(100, 0, 100 + 50, 0 + 50);

	setfillcolor(YELLOW);
	fillrectangle(100, 50, 100 + 50, 50 + 50);

	solidrectangle(100, 100, 100 + 50, 100 + 50);

	roundrect(160, 0, 160 + 50, 0 + 50, 30, 20);
}


int main()
{
	initgraph(640, 480,EX_SHOWCONSOLE | EX_NOMINIMIZE);

	setbkcolor(WHITE);
	cleardevice();
	getchar();

	setbkcolor(RGB(231,114,227));
	cleardevice();

	dropshape();

	getchar();
	return 0;
}