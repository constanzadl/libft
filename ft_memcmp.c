#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{	
	size_t i;
	unsigned char *s1_ptr;
	unsigned char *s2_ptr;

	i = 0;
	s1_ptr = (unsigned char *)s1;
	s2_ptr = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while(s1_ptr[i] == s2_ptr[i] &&  n > i)
	{
		i++;
	}
	return(s1_ptr[i] - s2_ptr[i]);
}
