#include "main.h"
/**
 * _strcat - concatenate two strings
 * @dest: destination file 
 * @src: source.
 * Return: the pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int lo;
	int vo;
	lo = vo = 0;

	while (*(dest + lo) != '\0')
	{
		lo++;
	}

	while (vo >= 0)
	{
		*(dest + lo) = *(src + vo);
		if (*(src + vo) == '\0')
			break;
		lo++;
		vo++;
	}
	return (dest);
}
