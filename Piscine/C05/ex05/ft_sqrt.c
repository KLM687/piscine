#include <unistd.h>
#include <stdio.h>

int	ft_sqrt(int nb)
{
	int i;
	int square;

	i = 1;
	square = 1;
	while (i < nb && square < nb)
	{
		square = i * i;
		if (square != nb)
			i++;
	}
	return (square == nb ? i : 0);
}
