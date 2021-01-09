#include "shell.h"

/**
 * print_env - prints environment if program is env
 * @tokens: unused attribute
 * Return: 1 if env printed | 0 if not
 **/
int print_env(char *tokens[])
{
	int i;

	(void)tokens;

	for (i = 0; environ[i]; i++)
		printf("%s\n", environ[i]);

	return (0);
}

/**
 * _getenv - returns environment info for key
 * @key: environment variable to search for
 * Return: env var info in a string of type key=value
 **/
char *_getenv(char *key)
{
	int i = 0;

	for (; environ[i]; i++)
		if (key_match(key, environ[i]))
			return (environ[i] + _strlen(key) + 1);

	return (NULL);
}
