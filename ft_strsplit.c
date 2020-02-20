#include "libft.h"

static	char	*ft_makeword(const char *str, int i, char c)
{
	char *res;
	int j;
	int k;
	
	j = 0;
	k = i;
	while (str[k] != c)
		k++;
	res = ft_strnew(k - i);
	while (str[i] != c && str[i] != '\0')
	{
		res[j] = str[i];
		i++;
		j++;
	}
	res[j] = '\0';
	return (res);
}
char	**ft_strsplit(char const *s, char c)
{
	char **words;
	int i;
	int counter;

	i = 0;
	counter = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && s[i + 1] == c)
			counter++;
		i++;
	}
	if (!(words = (char **)malloc(sizeof(char *) * counter)))
		return (NULL);
	counter = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			words[counter] = ft_makeword(s, i, c);
			counter++;
		}
		if (s[i] == c)
			i++;
	}
	return (words);
}
