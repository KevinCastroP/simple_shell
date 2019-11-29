#include "lib.h"
/**
 * jksing - function that handle the signal ^C
 * @hsign: the signal that enters
 *
 * Return: nothing
 */

void jksing(int hsign)
{
	if (hsign)
		_print("\n$ ");
}
