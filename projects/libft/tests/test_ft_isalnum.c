#include <unistd.h>
#include <ctype.h>

int ft_isalnum(int c);

int main ()
{
	int num [] = {'0', '5', '9', 'A', 'M', 'Z', 'a', 'm', 'z',
		'/', ':', '@', '[', '`', '{', -1 };
	int i = 0;
		while (i < 16)
		{
			
		int got = ft_isalnum(num[i]);
		int expected = isalnum(num[i]);
			if (!got)
			{
				write (1, &num[i], 1);
				write (1, ": not alnum ", 12);
			}
			else
			{
				write (1, &num[i], 1);
				write (1, ": is alnum ", 11);
			}
			if (got == expected)
				write (1, "ft_alnum = isalnum\n", 19); 
		i++;
		}
	return (0);
}
