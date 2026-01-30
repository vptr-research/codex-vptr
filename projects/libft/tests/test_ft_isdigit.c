#include <unistd.h>
#include <ctype.h>

int ft_isdigit(int c);

int main()
{
	int test_numbers[] = {'1', '2', 2, 'a', '3', 9, '6', 53};
	int i = 0;
	
	while (i < 8)
	{
		int expected = isdigit(test_numbers[i]);
		int got = ft_isdigit(test_numbers[i]);
		int passed = (!expected == !got);

		if (got != 0)
		{
			write (1, &test_numbers[i], 1);
			write (1, ": is digit", 10);
		}
		else
		{
			write(1, &test_numbers[i], 1);
			write (1, ": not digit", 11);
		}
		if (passed)
			write (1, "- ok\n", 5);
		else
			write (1, "- FAIL\n", 7);
		i++;
	}
	return (0);
}
