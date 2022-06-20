#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
	char *dst2;
	char *src2;

	dst2 = (char *)dst;
	src2 = (char *)src;

	if (dst == NULL && src == NULL)
		return (NULL);
	if (dst < src)
		return (ft_memcpy(dst, src, len));
	while (len--)
		dst2[len] = src2[len];
	return (dst);
}

//int main()
//{
//	char dst[] = "42tokyo-hmakino";
//
//	ft_memmove(dst, &dst[8], 7);
//	printf("%s\n", dst);
//	ft_memmove(NULL, NULL, 1);
//}
