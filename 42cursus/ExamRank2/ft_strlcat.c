#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t dlen = ft_strlen(dst);
	size_t slen = ft_strlen(src);

	if (dstsize <= dlen)
		return (dstsize + slen);
	ft_strlcpy(&dst[dlen], src, dstsize - dlen);
	return (dlen + slen);
}

//int main()
//{
//	char dst[16] = "hmakino";
//	char src[] = "-42tokyo";
//
//	printf("ft dst len: %zu\n", ft_strlcat(dst, src, 16));
//	printf("%s\n", dst);
//}
