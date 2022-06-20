#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t dlen = ft_strlen(dst);
	size_t slen = ft_strlen(src);

	if (!dstsize)
		return (slen);
	while (--dstsize)
		*dst++ = *src++;
	*dst = '\0';
	return (slen);
}

//int main()
//{
//	char dst[8];
//	char src[] = "hmakino";
//
//	printf("return value: %zu\n", ft_strlcpy(dst, src, 5));
//	printf("dst: %s\n",dst);
//	//strlcpy(NULL, NULL, 1);
//}
