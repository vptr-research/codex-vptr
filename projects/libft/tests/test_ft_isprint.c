#include <unistd.h>
#include <ctype.h>

int ft_isprint(int c);

int main()
{
	int test_values[] = {'A', ' ', 12, 127, 126, 44, 'z'};
	int i = 0;

	while (i < 7)
	{
		int got = ft_isprint(test_values[i]);
		int expected = isprint(test_values[i]);

		if (got)
		{
			write (1, &test_values[i], 1);
			write (1, ": is print\n", 11); 
		}
		else
		{
			write (1, &test_values[i], 1);
			write (1, ": not is print\n", 15); 
		}
		if (got != expected)
			write (1, " ft_isprint FAIL", 16);
		i++;
	}
	return (0);
}
