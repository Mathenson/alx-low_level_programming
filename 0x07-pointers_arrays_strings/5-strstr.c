#include "main.h"
/**
 * _strstr - find the first occurence of the substring
 * needle in the string haystack
 * @haystack: entire string
 * @needle: substring
 * Return: pointer to the begining of located substring or
 * NULL if the substring id not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *bhaystack;
	char *pneedle;

	while (*haystack != '\0')
	{
		bhaystack = haystack;
		pneedle = needle;

		while (*haystack != '\0' && *pneedle != '\0' && *haystack == *pneedle)
		{
			haystack++;
			pneedle++
		}
		if (!*pneedle)
			return (bhaystack)
		haysack = bhaystack + 1;
	}
	return (0);
}
