#include <unistd.h>
#include <ctype.h>

int ft_toupper(int c);

int main()
{
	int test_values[] = {'A', 'a', 'b', 'z', ' ', 'Z', '1'};
	int i = 0;

	while (i < 7)
	{
		int got = ft_toupper(test_values[i]);
		int expected = toupper(test_values[i]);

		if (got != test_values[i])
		{
			write (1, &got, 1);
			write (1, ": lower > upper\n", 16); 
		}
		else
		{
			write (1, &test_values[i], 1);
			write (1, ": not lower\n", 12);
		}
		if (got != expected)
			write (1, " incorrect toupper implementation", 34);
		i++;
	}
	return (0);
}
