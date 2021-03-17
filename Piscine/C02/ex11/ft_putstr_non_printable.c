#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_puthex(unsigned char c)
{
	char *base;

	base = "0123456789abcdef";

	if ( c < 16 )
	{
		write(1, "0", 1);
		ft_putchar(base[c % 16]);
	}
	else 
	{
		ft_putchar(base[c / 16]);
		ft_putchar(base[c % 16]);
	}
}

void	ft_putstr_non_printable(char *str)
{
	while (*str)
	{
		if (*str < ' ' || *str == 127)
		{
			ft_putchar('\\');
			ft_puthex(*str);
		}
		else
		{
			ft_putchar(*str);
		}
		str++;
	}
}

int		main(void)
{
	char	*string;

	string = "Coucou\ntu vas bien ?";
	ft_putstr_non_printable(string);
}
