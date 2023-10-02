#include "main.h"


/**
 * _strlen - returns the length of string
 * @s: the string to check length
 * Return: integer lengthof a string
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
 * create_file - a function that creates a file.
 * @filename: name of file
 * @text_content: null terminated string
 * Return: 1 on success , -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes = 0, len = _strlen(text_content);

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_TRUSR | S_TWUSDR);
	if (fd == -1)
		return (-1);

	if (len)
		bytes = write(fd, text_content, len);
	close(fd);
	return (bytes == len ? 1 : -1);
}
