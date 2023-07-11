#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#define BUF_SIZE 1024

/**
 * error_exit - Prints the error message and exits with the specified
 * exit code.
 * @msg: The error message to be printed.
 * @exit_code: The exit code.
 */
void error_exit(const char *msg, int exit_code)
{
	dprintf(STDERR_FILENO, "%s\n", msg);
	exit(exit_code);
}

/**
 * main - Copies the content of a file to another file.
 * @argc: The number of arguments passed to the program.
 * @argv: An array of arguments passed to the program.
 *
 * Return: 0 on success, or the corresponding exit code on failure.
 */
int main(int argc, char *argv[])
{

	int fileFrom;
	int fileTo;
	ssize_t bytesRead;
	ssize_t bytesWritten;
	char buffer[BUF_SIZE];

	if (argc != 3)
		error_exit("Usage: cp file_from file_to", 97);

	fileFrom = open(argv[1], O_RDONLY);

	if (fileFrom == -1)
		error_exit("Error: Can't read from file", 98);

	fileTo = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR
			| S_IRGRP | S_IWGRP | S_IROTH);
	if (fileTo == -1)
		error_exit("Error: Can't write to file", 99);

	while ((bytesRead = read(fileFrom, buffer, BUF_SIZE)) > 0)
	{
		bytesWritten = write(fileTo, buffer, bytesRead);

		if (bytesWritten == -1)
			error_exit("Error: Can't write to file", 99); }

	if (bytesRead == -1)
		error_exit("Error: Can't read from file", 98);

	if (close(fileFrom) == -1)
		error_exit("Error: Can't close fd", 100);

	if (close(fileTo) == -1)
		error_exit("Error: Can't close fd", 100);

	return (0);

}
