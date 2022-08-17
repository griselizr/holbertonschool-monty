#include "monty.h"

monty_t monty;

/**
 * main - monty bytecode interpreter
 * @argc: argument count
 * @filename: path to the file containing Monty byte code
 *Return: EXIT_SUCEEE or EXIT_FALILURE
 */
int main(int argc, char *filename)
{
	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	monty.file = fopen(filename, "r");
	if (!monty.file)
	{
		fprintf((STDERR_FILENO, "Error: Can't open file %s\n", filename);
		fprintf(STDERR_FILENO, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}


