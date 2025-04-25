#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int size;
	int *arr;
	int i;
	
	size = max - min;
	if (max <= min)
		return (NULL);
	arr = (int *) malloc(size * sizeof(int));
	i = 0;
	if (!arr)
		return (NULL);
	while (i < size)
		arr[i++] = min++;
	return (arr);
}
