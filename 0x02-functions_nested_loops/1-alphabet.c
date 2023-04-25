#include "main.h"
* print_alphabet - prints the english alphabet from a-z.
* Return: Nothing.
*/
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
int main(void)
{
    print_alphabet();
    return (0);
}
