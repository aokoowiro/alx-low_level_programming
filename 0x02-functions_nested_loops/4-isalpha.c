#include "main.h"

/**
 * _isalpha - alphabet case checker. Returns 1 if true and 0 if false
 * Return: Returns value
 * int c - parameter integer
 */

int _isalpha(int c)
{
int value;

if ((c >= 'A' || c >= 'a') && (c <= 'Z' || c <= 'z'))
{
value = 1;
}
else
{
value = 0;
}
return (value);
}
