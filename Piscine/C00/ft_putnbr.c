#include <unistd.h>

void ft_putchar(char c)
{
	write ( 1 , &c , 1 );
}










void ft_putnbr ( int nb )
{
	if ( nb >= 0 && nb < 10 )
	{
		ft_putchar( nb + '0');
	}
	else if ( nb < 0 ) 
	{
		ft_putchar( '-' );
		ft_putnbr( nb * (-1));
	}
	else
	{
		ft_putnbr ( nb / 10 );
		ft_putnbr ( nb % 10 );
	}
}

int main ()
{
	int nb;
	nb = 1234;
	ft_putnbr(nb);
return 0;
}
