#include <unistd.h>
#include <string.h>
/**
 * main - entry point of the program
 * Return: - Always 0 (SUCCESS)
 */
int main(void)
{
	char mycharacter[] = "_putchar\n";
	
	size_t i;

	for (i = 0; i < strlen(mycharacter); ++i)
	{
		_putchar(mycharacter[i]);
	}

	return (0);
}
