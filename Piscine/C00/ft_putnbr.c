#include <unistd.h>

void ft_putchar(char c)
{
	write ( 1 , &c , 1 );
}

void	ft_putnbr(int nb)
{
	long int a;

	a = nb;
	if (a< 0)
	{
		ft_putchar('-');
		a = -a;
	}
	if (a > 9)
	{
		ft_putnbr(a / 10);
		ft_putnbr(a % 10);
	}
	else
		ft_putchar(a + '0');
}








int main ()
{
	int nb;
	nb = -2147483648;
	ft_putnbr(nb);
return 0;
}
