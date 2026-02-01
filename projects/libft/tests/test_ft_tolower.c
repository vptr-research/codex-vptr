#include <unistd.h>
#include <ctype.h>

int ft_tolower(int c);

int main()
{
	int test_values[] = {'a', 'b', 'C', 'D', '!', '@'};
	int i = 0;

	while (i < 6)
	{
		int got = ft_tolower(test_values[i]);
		int expected = tolower(test_values[i]);
		if (got != test_values[i])
		{
			write (1, &got, 1);
			write (1, ": converted to lower\n", 21);
		}
		else
		{
			write (1, &got, 1);
			write (1, ": Not upper\n", 12); 
		}
		if (got != expected)
			write (1, "Incorrect Implementation\n", 25);
	i++;
	}
	return (0);
}
