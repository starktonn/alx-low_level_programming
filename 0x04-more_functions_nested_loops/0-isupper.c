#include "main.h"

/**
 * _isupper return 1 or 0 depending on provided input
 * c in the character input
 *
 * Return: Always 0.
 */

int _isupper(int c)
{
	if(c >= 'A' && c <='Z'){
            return 1;
        }else{
            return 0;
        }
}

