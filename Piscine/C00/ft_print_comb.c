#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	char nb1;
	char nb2;
	char nb3;

	nb1 = '0';
	while (nb1 <= '7')
	{
		nb2 = nb1 + 1;
		while (nb2 <= '8')
		{
			nb3 = nb2 + 1;
			while (nb3 <= '9')
			{
				ft_putchar(nb1);
				ft_putchar(nb2);
				ft_putchar(nb3);
				if (!(nb1 == '7' && nb2 == '8' && nb3 == '9'))
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				nb3++;
			}
			nb2++;
		}
		nb1++;
	}
}

int main ()
{
	ft_print_comb();

	return 0;
}
