#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to the POSIX
 * standard output.
 * @filename: The name of the file to be read.
 * @letters: The number of letters to read and print.
 *
 * Return: The actual number of letters read and printed.
 *         If the file cannot be opened or read, return 0.
 *         If filename is NULL, return 0.
 *         If write fails or does not write the expected amount
 *         of bytes, return 0.
 */
size_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int fileDescriptor;
	ssize_t bytesRead;
	ssize_t bytesWritten;

	if (filename == NULL)
	{
		return (0); }

	fileDescriptor = open(filename, O_RDONLY);

	if (fileDescriptor == -1)
	{
		return (0); }

	buffer = (char *)malloc(letters * sizeof(char));

	if (buffer == NULL)
	{
		close(fileDescriptor);
		return (0); }

	bytesRead = read(fileDescriptor, buffer, letters);

	if (bytesRead == -1)
	{
		close(fileDescriptor);
		free(buffer);
		return (0); }

	bytesWritten = write(STDOUT_FILENO, buffer, bytesRead);

	if (bytesWritten == -1)
	{
		close(fileDescriptor);
		free(buffer);
		return (0); }
	close(fileDescriptor);
	free(buffer);
	return (bytesWritten);
}
