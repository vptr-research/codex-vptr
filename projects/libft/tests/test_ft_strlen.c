#include <string.h>
#include <unistd.h>

size_t ft_strlen(const char *s);

int main()
{
	const char *phrase = "Test Strlen";
	int got = ft_strlen(phrase);
	int expected = strlen(phrase);
		if (got != expected)
			write (1, "Incorrect Implementation\n", 25);
		else
			write (1, "Correct Implementation\n", 23);
	return (0);
}

