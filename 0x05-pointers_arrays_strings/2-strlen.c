/**
 * _strlen - returns length of a string
 * @s: char
 * Return: a
 */
int _strlen(char *s)
{
	int a;

	for (a = 0 ; s[a] != '\0' ; a++)
		;

	return (a);
}
