#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{	
	size_t i;

	i = 0;
	while(((unsigned char*)s1)[i] == ((unsigned char*)s2)[i] || n > 0)
	{
		i++;
		n--;
		if((!((unsigned char *)s1)[i] && !((unsigned char *)s2)[i]) || n == 0)
			return (0);
	}
	if (n == 0)
		return (0);
	return(((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
}
