#include <unistd.h>
#include <ctype.h>

int ft_isalpha(int c);

int main ()
{
	int alp[] = {'A', 'B', 'c', 'd', 'E', 'f', -1, '0'};
	int i = 0;
	while (i < 8)
	{
		int got = ft_isalpha(alp[i]);
		int expected = isalpha(alp[i]);
		int passed = (expected != 0 ) == (got != 0);

		if (got != 0)
		{
			write (1, &alp[i], 1);
			write (1, ": Is Alpha", 10);
		}
		else
		{
			write (1, &alp[i], 1);
			write (1, ": Not Alpha", 11);
		}
		if (passed)
		{
			write (1, " and ft_isalpha = isalpha\n", 26);
		}
		else 
		{
			write (1, " and ft_isalpha != islpha\n", 27);
		}
		i++;
	}
	return (0);
}
