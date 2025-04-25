#include <stdlib.h>

int	ft_strlen(char *str)
{
	int size;

	size = 0;
	while (str[size])
		size++;
	return (size);
}
char	*ft_strdup(char *src)
{
	char *dup;
	int i;
	int size;

	i = 0;
	size = ft_strlen(src);
	dup = (char *) malloc((size + 1) * sizeof(char));
	if (!dup)
		return (NULL);
	while (src[i])
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

