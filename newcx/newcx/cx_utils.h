#pragma once

// Этот заголовок определяет методы и переменные для глобальной видимости

#include "cx_public.h"

// - - - - - - - - - - - - -- - - - - - - - - - - - - - - - - - - - - - -

#ifndef __CX_UTILS_
#define __CX_UTILS_

// Устанавливает положение курсора в окне для вывода
// @int x				- координата по оси X
// @int y				- координата по оси Y
void		SetCursorPosition( int x, int y );

#endif