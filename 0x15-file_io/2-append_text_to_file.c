#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: The name of the file to append the text to.
 * @text_content: The NULL-terminated string to add at the end of the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fileDescriptor;
	size_t bytesWritten;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (1);

	fileDescriptor = open(filename, O_WRONLY | O_APPEND);

	if (fileDescriptor == -1)
		return (-1);

	bytesWritten = write(fileDescriptor, text_content,
			strlen(text_content));

	if (bytesWritten == (size_t)-1)
	{
		close(fileDescriptor);
		return (-1); }

	close(fileDescriptor);
	return (1);


}

