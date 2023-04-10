#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int p, r, xx = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (xx = 0; text_content[xx];)
			xx++;
	}

	p = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	r = write(p, text_content, xx);

	if (p == -1 || r == -1)
		return (-1);

	close(p);

	return (1);
}
