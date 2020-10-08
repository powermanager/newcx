#include "cx_paint.h"
#include "cx_utils.h"

void	CX_Write( int x, int y, std::string sym, int backgroundcolor, int foregroundcolor ) {

	SetCursorPosition( x, y );

	std::cout << sym.c_str();

}