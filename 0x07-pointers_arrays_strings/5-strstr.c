#include "main.h"

/**
 * _strstr - finds the first occurence of the substring needle
 * @haystack: parameter for haystack
 * @needle: parameter for needle
 * Return: pointer to the begining of the located substring
 *
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *begining = haystack;
		char *pattern = needle;

		while (*pattern == *haystack && *pattern != '\0'
				&& *haystack != '\0')
		{
			haystack++;
			pattern++;
		}
		if (*pattern == '\0')
			return (begining);
		haystack = begining + 1;
	}
	return ('\0');
}
