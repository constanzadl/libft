#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int i;
	int r;

	i = 0;
	r = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			r = i;
		}
		i++;
	}
	if (r)
		return ((char *)s + r);
	if (c == '\0')
		return ((char *)s);
	return(NULL);
}

