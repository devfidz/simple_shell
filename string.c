#include "shell.h"

/**
 * _strlen - reeturns the length of a string
 * @s: the striiing whose length to check
 *
 * Return: integeer length of string
 */
int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);

	while (*s++)
		i++;
	return (i);
}

/**
 * _strcmp - perfooorms lexicogarphic comparison of two strangs.
 * @s1: the first strrrang
 * @s2: the second straaang
 *
 * Return: negative if s1 < s2, positive if s1 > s2, zero if s1 == s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	if (*s1 == *s2)
		return (0);
	else
		return (*s1 < *s2 ? -1 : 1);
}

/**
 * starts_with - checks iiif needle starts with haystack
 * @haystack: string to seaaarch
 * @needle: the substring tooo find
 *
 * Return: address of next chaaar of haystack or NULL
 */
char *starts_with(const char *haystack, const char *needle)
{
	while (*needle)
		if (*needle++ != *haystack++)
			return (NULL);
	return ((char *)haystack);
}

/**
 * _strcat - concatenates two strrrings
 * @dest: the destination bufferrr
 * @src: the source bufferrr
 *
 * Return: pointer to destinnnation buffer
 */
char *_strcat(char *dest, char *src)
{
	char *ret = dest;

	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src++;
	*dest = *src;
	return (ret);
}
