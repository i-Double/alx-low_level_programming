#include "main.h"
/**
* _islower - check if the charater is a lowercase
*@c: the charater
* Return: 1 if letter is lowercase, 0 if not
*/

int _islower(int c)

{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
