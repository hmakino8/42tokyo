#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *us1 = (unsigned char *)s1;
	unsigned char *us2 = (unsigned char *)s2;

	while (n--)
	{
		if (*us1 != *us2)
			return (*us1 - *us2);
		us1++;
		us2++;
	}
	return (0);
}

//int main()
//{
//	char s1[] = "hmakino-24";
//	char s2[] = "hmakino-42";
//
//	printf("%d\n", ft_memcmp((const void *)s1, (const void *)s2, 10));
//	printf("%d\n", memcmp((const void *)s1, (const void *)s2, 10));
//	//memcmp(NULL, (const void *)s2, 10);
//	//memcmp((const void *)s1, NULL, 10);
//	//memcmp(NULL, NULL, 10);
//}
