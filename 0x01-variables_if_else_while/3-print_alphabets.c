#include <stdio.h>
/**
 * Description:main - prints out a string to stdout.
 * Return:0 if success.
 */
int main(void)
{
	char c;
	char d;

	c = 'a';
	d = 'A';
	while
		(c <= 'z') {
			putchar(c);
			c++;
		}
	while
		(d <= 'Z') {
			putchar(d);
			d++;
		}
	putchar('\n');
	return (0);
}
