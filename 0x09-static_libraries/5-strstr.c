#include "main.h"

/**
 *  * _strstr - funtion locates a substring.
 *   *
 *    * @haystack:  This is the main C string to be scanned.
 *     * @needle: This is the small string to be searched with-in haystack string.
 *      *
 *       * Return: Returns the transformed pointer.
 *        *
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	for (i = 0; haystack[i]; i++)
		if (haystack[i] == needle[0])
			return (haystack + i);

	if (haystack[i] == needle[0])
		return (haystack + i);

	return (0);
}
