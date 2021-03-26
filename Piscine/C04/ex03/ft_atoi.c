#include <stdio.h>




int ft_atoi(char *s)
{
	int sign;
	long result;

	result = 0;
	sign = 1;
	while(*s == 32 || (*s >= 9 && *s <= 13))
		s++;
	while(*s == '-' || *s == '+')
	{
		if (*s == '-')
			sign = -1;
		s++;
	}
	while (*s >= '0' && *s <= '9')
	{
		result = result * 10 + *s - '0';
		s++;
	}
	return (sign *(int)result);
}

int main ()
{
	char a[] = "    ++++--132245sqd";
	printf("%d\n",ft_atoi(a));
}
