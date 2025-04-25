#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max)
{
	int size;
	int i;
	
	size = max - min;
	if (max <= min)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *) malloc(size * sizeof(int));
	if (!*range)
		return (-1);
	i = 0;
	while (i < size)
		(*range)[i++] = min++;
	return (size);
}
