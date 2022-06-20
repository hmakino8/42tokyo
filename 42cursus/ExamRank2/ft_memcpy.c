#include "libft.h"

void *ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t i;
	char *dst2;
	char *src2;

	dst2 = (char *)dst;
	src2 = (char *)src;
	i = 0;
	while (i < n)
	{
		dst2[i] = src2[i];
		i++;
	}
	return (dst);
}

//int main()
//{
//	char dst[8];
//	char src[] = "hmakino";
//
//	printf("%s\n", (char *)ft_memcpy(dst, src, 7));
//}
