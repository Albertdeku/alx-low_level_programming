#include "main.h"
/**
 *_abs-prints the absolute value of an integer.
 *@a:the integer to compute its absolute value.
 *Return:returns the abs value.
 *
 */
int _abs(int a)
{
	if (a < 0)
	{
		int absvalue;

		absvalue = a * (-1);
		return (absvalue);
	}
return (a);
}
