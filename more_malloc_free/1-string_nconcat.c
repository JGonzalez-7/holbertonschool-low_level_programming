#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes from s2 to concatenate
 *
 * Return: pointer to the new string, or NULL if it fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len1 = 0, len2 = 0;
	char *result;

	if (s1 == NULL)
		s1 = ""; /* Treat NULL as empty string */

	if (s2 == NULL)
		s2 = ""; /* Treat NULL as empty string */

	while (s1[len1])
		len1++; /* Find length of s1 */

	while (s2[len2])
		len2++; /* Find length of s2 */

	if (n >= len2)
		n = len2; /* Use full s2 if n is larger than its length */

	result = malloc(sizeof(char) * (len1 + n + 1));
	if (result == NULL)
		return (NULL); /* Check malloc failure */

	for (i = 0; i < len1; i++)
		result[i] = s1[i]; /* Copy all of s1 */

	for (j = 0; j < n; j++)
		result[i + j] = s2[j]; /* Copy n bytes of s2 */

	result[i + j] = '\0'; /* Null terminate the new string */

	return (result); /* Return pointer to new string */
}
