#include <stdio.h>
/**
 * Description:main - prints out a string to stdout.
 * Return:0 if success.
 */
int main(void)
{
	char c;
	int d;

	c = 'a';
	d = 0;
	while
		(d < 10) {
			putchar(d + '0');
			d++;
		}
	while
		(c <= 'f') {
			putchar(c);
			c++;
		}
	putchar('\n');
	return (0);
}
