#include "kovan/geom.h"

point2 create_point2(int x, int y)
{
	point2 ret;
	ret.x = x;
	ret.y = y;
	return ret;
}

rectangle create_rectangle(int ulx, int uly, int width, int height)
{
	rectangle ret;
	ret.ulx = ulx;
	ret.uly = uly;
	ret.width = width;
	ret.height = height;
	return ret;
}