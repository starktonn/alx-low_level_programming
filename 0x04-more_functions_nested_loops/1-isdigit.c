#include "main.h"

/**
 * _isdigit checks whether input is a number between 0 and 9
 *c is the input character
 * it returns either 0 or 1
 *
 */


int _isdigit(int c)
{
        if(c >= '0' && c <= '9'){
            return 1;
        }else{
            return 0;
        }
}

