#include "cx_public.h"
#include "cx_paint.h"
int main()
{

	std::string map[SIZEX][SIZEY];

	for( int x = 0; x < SIZEX; x++ )
		for( int y = 0; y < SIZEY; y++ )
			map[x][y] = "#";

	for( int x = 0; x < SIZEX; x++ )
		for( int y = 0; y < SIZEY; y++ ) {
			CX_Write( x, y, map[x][y] );
		}

	char str[32];
	std::cin >> str;
}
