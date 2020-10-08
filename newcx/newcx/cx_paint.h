#pragma once

// ���� ��������� ���������� ������ ��� ������ � �������

#include "cx_public.h"

// - - - - - - - - - - - - -- - - - - - - - - - - - - - - - - - - - - - -

#ifndef __CX_PAINT_
#define __CX_PAINT_

// ������ � ������� �� ����������� ����������� ������, ��� ���� ����� �������� ����
// @int x				- ���������� �� ��� X
// @int y				- ���������� �� ��� Y
// @std::string sym		- ������, ������� ����� ���������� � �������
// @int backgroundcolor	- ���� ����
// @int foregroundcolor	- ���� �������
void	CX_Write( int x, int y, std::string sym, int backgroundcolor = 0, int foregroundcolor = 0 );

#endif