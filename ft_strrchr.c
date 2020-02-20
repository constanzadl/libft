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
	if (!c)
		return ((char *)s + i );
	if (c && (r != 0 || *s == c))
		return ((char *)s + r);
	return(NULL);
}

