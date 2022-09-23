/**
 * _strcat - function that concatenate two strings.
 *
 * @dest: pointer to destnation input
 * @src: pointer to source input
 *
 * Return: pointer to resulting string @dest
 */

char *_strcat(char *dest, char *src)
{
		int k, l;

			k = 0;
		/*find the length of dest*/
			while (dest[k])
			k++;

		/* concatenate dest n src*/
			for (l = 0; src[l] ; l++)
			dest[k++] = src[l];
		dest[k] = '\0';
	return (dest);
}
