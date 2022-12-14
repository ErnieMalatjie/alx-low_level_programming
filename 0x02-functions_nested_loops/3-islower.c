#include "main.h"

/**
 *main - _islower
 *
 * Return: 1
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
