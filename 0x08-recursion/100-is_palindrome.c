#include "main.h"

/**
 * is_palindrome - function to check a string
 * @s: string input to test
 * Return: success
 */

int is_palindrome(char *s)
{
	int temp, rem, rev = 0;
	temp = *s;

	while(*s != 0){
		rem = *s % 10;
		rev = rev * 10 + rem;
		*s /= 10;
	}
	if(rev == temp){
		return (0);
	}
	else {
		return (1);
	}
}
