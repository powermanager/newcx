#pragma once

// этот заголовок определяет методы для вывода в консоль

#include "cx_public.h"

// - - - - - - - - - - - - -- - - - - - - - - - - - - - - - - - - - - - -

#ifndef __CX_PAINT_
#define __CX_PAINT_

// Рисует в консоли по определённым координатам символ, при этом можно изменить цвет
// @int x				- координата по оси X
// @int y				- координата по оси Y
// @std::string sym		- символ, который будет выводиться в консоль
// @int backgroundcolor	- цвет фона
// @int foregroundcolor	- цвет символа
void	CX_Write( int x, int y, std::string sym, int backgroundcolor = 0, int foregroundcolor = 0 );

#endif