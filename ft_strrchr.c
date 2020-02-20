#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int i;

	i = ft_strlen(s) + 1;
	if (s[0] == '\0')
		return(NULL);
	while (i > 0)
	{
		if (s[i] == c)
		{
			return((char *)s);
		}
		i--;
	}
	return(NULL);
}

