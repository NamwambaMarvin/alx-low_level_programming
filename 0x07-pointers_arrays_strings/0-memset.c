#include main.h
/**
 *_memset - Fills the first n bytes of memory pointed to by s with b bytes
 *@s: Pointer to the memory of b bytes
 *@b: Constant byte to be filled
 *@n: Number of bytes to be filled
 *Return: poiter to the memory area of s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned char *s_changed_datatype = s;

	while (n--)
	{
		*s_changed_datatype++ = (unsigned char)b;
	}
	return (s);
}
