#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int create_file(const char *filename, char *text_content)
{
	mode_t filePermissions;
	int fileDescriptor;
	ssize_t bytesWritten;
	
	filePermissions = S_IRUSR | S_IWUSR;
	
	if (filename == NULL)
	{
		return (-1); }

	if (text_content == NULL)
	{
		fileDescriptor = open(filename, O_WRONLY | O_CREAT | O_TRUNC,
				filePermissions);

		if (fileDescriptor == -1)
		{
			return (-1);}

		if (close(fileDescriptor) == -1)
		{
			return (-1); }
	}

	fileDescriptor = open(filename, O_WRONLY | O_CREAT | O_TRUNC,
			filePermissions);

	if (fileDescriptor == -1)
	{
		return (-1); }

	bytesWritten = write(fileDescriptor, text_content, strlen(text_content));

	if (bytesWritten == -1)
	{
		return (-1); }

	if (close(fileDescriptor) == -1)
	{
		return (-1); }

	return (1);
	
}
