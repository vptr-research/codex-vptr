#include <unistd.h>
#include <ctype.h>

int ft_isascii(int c);

int main()
{
	int test_values[] = {-1, 0, 65, ' ', 128, 255};
	int i = 0;

	while (i < 6)
	{
		int got = ft_isascii(test_values[i]);
		int expected = isascii(test_values[i]);

		if (got)
		{
			write (1, &test_values[i], 1);
			write (1, ": is ascii\n", 11); 
		}
		else
		{
			write (1, &test_values[i], 1);
			write (1, ": not is ascii\n", 15);
		}
		if (got != expected)
			write (1, ": ft_isascii FAIL\n", 18);
	i++;
	}
	return (0);
}
