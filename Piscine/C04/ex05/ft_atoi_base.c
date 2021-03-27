#include <unistd.h>
#include <stdio.h>

int	ft_check(char *base)
{
	int i;
	int j;

	i = -1;
	while (base[++i])
	{
		j = 1;
		while (base[i + j])
		{	
			if (base[i] == base[i +j])
				return 1;
		j++;
		}
	}
	return (0);
}

int	ft_base_valid(char *base)
{	
	int i;

	i = -1;
	if (ft_check(base))
		return 0;
	while (base[++i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == ' ')
			return 0;
	}
	if (i < 2)
		return 0;
	return 1;
}

int	ft_base_index(char *base, char c)
{
	int i;

	i = 0;
	while (base[i] != c && base[i])
		i++;
	return (i);
}

int	ft_atoi_base(char *str, char *base)
{
	int result;
	int sign;
	int base_len;

	result = 0;
	sign = 1;
	base_len = 0;
	if (ft_base_valid(base))
	{
		while (*str == 32 || (*str >= 9 && *str <= 13))
			str++;
		while (*str == '-' || *str == '+')
		{
			if (*str == '-')
        sign = -sign;
			str++;
		}
		while (base[base_len])
			base_len++;
		while (ft_base_index(base, *str) != base_len)
		{
			result = result * base_len + ft_base_index(base, *str);
			str++;
		}
	}
	return (result*sign);
}


int main()
{
	char base[] = "0123456789ABCDEF";
	char nombre_test[] = "1F4";

	printf("%d\n", ft_atoi_base(nombre_test, base));
	return 0;
}
