#include "main.h"
/**
 * create_file - creates a file
 * @filename: name of the file
 * @text_content: text of the content
 * Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
	int aux, c, w;

	aux = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (aux == -1)
		return (-1);
	for (c = 0; text_content[c]; c++)
		;
	w = write(aux, text_content, c);
	if (w == -1)
	{
		close(aux);
		return (-1);
	}
	close(aux);
	return (1);
}
