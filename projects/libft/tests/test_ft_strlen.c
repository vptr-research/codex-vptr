#include <string.h>
#include <unistd.h>

size_t ft_strlen(const char *s);

int main()
{
	const char *phrase[] = {"Test Strlen", "", "     ", "\n", "a"};
	int i = 0;
		while ( i < 5)
		{
			size_t got = ft_strlen(phrase[i]);
			size_t expected = strlen(phrase[i]);
			if (got != expected)
				write (1, "Incorrect Implementation\n", 25);
			else
				write (1, "Correct Implementation\n", 23);
		i++;
		}
	return (0);
}
