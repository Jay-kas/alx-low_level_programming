nclude "main.h"

/**
  * _strstr - locate a substring
  * @haystack: the string to search
  * @needle: the string to find
  *
  * Return: char value
  */
char *_strstr(char *haystack, char *needle)
{
	int a = 0, b = 0;

	while (haystack[a])
	{
		while (needle[b])
		{
			if (haystack[a + b] != needle[b])
			{
				break;
			}

			b++;
		}

		if (needle[b] == '\0')
		{
			return (haystack + a);
		}

		a++;
	}

	return ('\0');
}
Chidiebere Amuchionu9:54 PM
5
linda gift9:55 PM
lipsealed
Denyefa Leader9:58 PM
ALLENNNNNNNNNNNNN
To wicked am just hungry me lol
Uloka Ngozi9:59 PM
Sir i have a challenge
Engr Poama10:05 PM
TASK 7
include "main.h"

/**
  * print_chessboard - Print the chessboard
  * @a: array of pieces
  *
  * Return: Nothing.
  */
void print_chessboard(char (*a)[8])
{
	int b, c;

	for (b = 0; b < 8; b++)
	{
		for (c = 0; c < 8; c++)
		{
			_putchar(a[b][c]);
		}

		_putchar('\n');
	}
}
