#include <unistd.h>
#include <string.h>

char *ft_strchr(const char *s, int c);

int main ()
{
	const char *test[] = {"Hello", "", "    ", "\0"};
	int i = 0;
	char let = 'l';

		while (i < 4)
		{
			char *got = ft_strchr(test[i], let);
			char *expected = strchr(test[i], let);
			if (got != expected)
				write (1, "Incorrect Implementation\n", 25);
			else
				write (1, "Correct Implementation\n", 23);
			i++;
		}
		// Test searching for '\0'
		char *got = ft_strchr("Hello", '\0');
		char *expected = strchr("Hello", '\0');
			if (got != expected)
				write(1, "Failed: searching for \\0\n", 25);
			else
				write(1, "Passed: searching for \\0\n", 25);
		return (0);
}
