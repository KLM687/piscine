#include <stdlib.h>
#include <stdio.h>

int		ft_strlen(char *str)
{
	char	*charptr;
	int		iterator;

	charptr = str;
	iterator = 0;
	while (*charptr != 0)
	{
		iterator++;
		charptr++;
	}
	return (iterator);
}

void	printsep(char **concatptr, char *sep)
{
	while (*sep)
	{
		**concatptr = *sep;
		sep++;
		*concatptr += 1;
	}
}

void	makeconcat(int size, char *concatptr, char **strs, char *sep)
{
	int n;
	int i;

	n = 0;
	while (n < size)
	{
		i = 0;
		while (strs[n][i])
		{
			*concatptr = strs[n][i];
			concatptr++;
			i++;
		}
		if (n == size - 1)
			*concatptr = 0;
		else if (*sep)
			printsep(&concatptr, sep);
		n++;
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*concat;
	char	*concatptr;
	int		nbchar;

	if (size)
	{
		nbchar = (strs[size - 1] - *strs) + ft_strlen(strs[size - 1]) + 1;
		concat = (char *)malloc(nbchar + ((ft_strlen(sep) - 1) * (size - 1)));
	}
	else
	{
		concat = malloc(1);
		*concat = 0;
		return (concat);
	}
	concatptr = concat;
	makeconcat(size, concatptr, strs, sep);
	return (concat);
}


int main()
{
	char *tablo[6];
	tablo[0] = "coucou";
	tablo[1] = "bite";
	tablo[2] = "fesse";
	tablo[3] = "de";
	tablo[4] = "la";
	tablo[5] = "merde";
	printf("%s\n", ft_strjoin(6, tablo, "!"));
	return (0);
}
