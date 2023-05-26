#include "shell.h"

/**
 **_strncpy - coppies a sttring
 *@dest: the destiiination string to be copied to
 *@src: the source ssstring
 *@n: the amount of cssharacters to be copied
 *Return: the concatenattted string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, j;
	char *s = dest;

	i = 0;
	while (src[i] != '\0' && i < n - 1)
	{
		dest[i] = src[i];
		i++;
	}
	if (i < n)
	{
		j = i;
		while (j < n)
		{
			dest[j] = '\0';
			j++;
		}
	}
	return (s);
}

/**
 **_strncat - concatenatessss two strings
 *@dest: the first stringgg
 *@src: the second striiing
 *@n: the amount of bytesee to be maximally used
 *Return: the concatenated sstring
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;
	char *s = dest;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	if (j < n)
		dest[i] = '\0';
	return (s);
}

/**
 **_strchr - locates a chararrrcter in a string
 *@s: the string to be parseddsd
 *@c: the character to look fordsd
 *Return: (s) a pointer to the mesmory area s
 */
char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
			return (s);
	} while (*s++ != '\0');

	return (NULL);
}
