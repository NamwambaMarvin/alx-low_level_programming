#include <stdio.h>
#include <string.h>
#define __FILENAME__ (strrchr(__FILE__, '/') ? strrchr(__FILE__, '/') + 1 : __FILE__)
/**
 * main - Prints the name of the file it was compiled from
 * Return: 0 ALWAYS SUCCESS
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0)
}
