#include "main.h"
/**
*_isalpha - checks for upper and lower case alphabet, print 1 otherwise print 0
*@c : int to be checked
*Return: 1 if alphabet,0 if otherwise
*/
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') && (c >= 'A' && c <= 'Z'));
}
