#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: source string
 *
 * Return: pointer to the destination string (dest)
 */
char *_strcat(char *dest, char *src)
{
int n;
int j;

n = 0;
while (dest[n] != '\0')
n++;
}
j = 0;
while (src[j] != '\0')
{
dest[n] = src[j];
n++;
j++;
}

dest[n] = '\0';
return (dest);
}
