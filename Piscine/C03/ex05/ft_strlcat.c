#include <stdio.h>
#include <unistd.h>




unsigned int    ft_strlcat(char *dest, char *src, unsigned int size)
{
        int i;
        int j;
	int k;

        i = 0;
        j = 0;
	k = 0;
        while (dest[i] != '\0')
                i++;
	while (src[j] != '\0' )
		j++;
	if (size == 0 && i < size)
		return (size + j);
        while ( k < j && i < size - i - 1)
        {
                dest[i+k] = src[j];
                k++;
        }
        dest[i + j] = '\0';
        return (i+j);
}

