#include <unistd.h>
#include <stdio.h>

char            *ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

int		ft_alphanumeric_or_not(char a)
{
		
	if ( a >= '0' || a <= '9')
	{
		return 0;
	}
	if (( a >= 'A'  && a <= 'Z') || ( a >= 'a' && a <= 'z'))
	{
		return 0;
	}

	return 1;
}





char		*ft_strcapitalize(char*str)
{	
	int i;
	i = 0;
	ft_strlowcase(str);	
	while (*str)
	{
		if ( ft_alphanumeric_or_not(str[i]) == 1 )
		{
			str[i]+=32;
		}
	}

return (str);
}

int main ()
{	
	char *tab;
	char str[37];

	int i=0;
	tab = "Vk_(7X)Vmf#H'Fk?>8j@} /7VVxh3(X{6)Xb";
	while (i < 37){
		str[i]=tab[i]+'0';
		i++;
	}
	
	ft_strcapitalize(&str[0]);

	printf("%s",str);
}

