#include "main.h"

/**
 * _isalpha - checks for alphabet letters
 * @c: a char to bechecked on.
 * Returns : returns 0 or 1 depending on condition
*/
int _isalpha(int c);
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
