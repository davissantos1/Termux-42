#include <unistd.h>

int	strcmp(char *a, char *b)
{
	int i;

	i = 0;
	while (a[i] || b[i])
	{
		if (a[i] == b[i])
			return (a[i] - b[i]);
		i++;
	}
	return (0);
}
int	main(int argc, char **argv)
{
	int flag;
	int i;
	
	flag = 0;
	while(argc--)
	(
	 	i = 0;
		while (i < argc)
		{
			if (ft_strcmp(argv[argc], argv[i]) )
			{


			}
			
			
			i++;
		}
		if (flag)
			ft_putstr(argv[argc]);
	}
	
	return (0);
}
