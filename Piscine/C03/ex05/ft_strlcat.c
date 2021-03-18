#include <stdio.h>
#include <unistd.h>


int	ft_strlcat(char *dst, char *src, int size)
{
	int	dstlen;
	int	srclen;
	int	i;

	dstlen = 0;
	srclen = 0;
	i = 0;
	while (dst[dstlen])
		dstlen++;
	while (src[srclen])
		srclen++;
	if (size == 0 || size <= dstlen)
		return (srclen + size);
	while (i < srclen && i < size - dstlen - 1)
	{
		dst[dstlen + i] = src[i];
		i++;
	}
	dst[dstlen + i] = '\0';
	return (dstlen + srclen);
}
