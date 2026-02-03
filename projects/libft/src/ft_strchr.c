#include <stddef.h> 

char *ft_strchr(const char *s, int c)
{
	int i = 0;

	while ((s[i] != c) && (s[i] != '\0'))
	{
		i++;
	}
	if (s[i] == c)
		return ((char *)(s + i));
	else
		return (NULL);
}
