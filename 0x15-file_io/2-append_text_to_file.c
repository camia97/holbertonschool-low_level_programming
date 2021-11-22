#include "main.h"
/**
 * append_text_to_file - appends text at the end
 * @filename: name of the file
 * @text_content: text content
 * Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int aux, c, w;

	if (!filename)
		return (-1);

	aux = open(filename, O_WRONLY | O_APPEND);

	if (!aux)
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
