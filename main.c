#include "graphics.h"
#include "extgraph.h"
#include "genlib.h"
#include "simpio.h"
#include "random.h"
#include "strlib.h"

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>
#include <winuser.h>

double width, height;
 
void Main()
{
	InitGraphics();
	SetWindowTitle("Google");
	width = GetWindowWidth();
	height = GetWindowHeight();
	//InitConsole();
	printf("%f %f",width, height); 
	//转到上一页 
	if(button(GenUUID(0),1,1,1,1,"后退"))
	MovePen(0.1,6.9);
	DrawLine(0.1,0.05);
	MovePen(0.1,6.9);
	DrawLine(0.1,-0.05);
	MovePen(0.1,6.9);
	DrawLine(0.2,0); 
 } 
