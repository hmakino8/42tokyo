#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *us = (unsigned char *)s;
	unsigned char uc = (unsigned char)c;

	while (n-- || (!*us && !uc))
	{
		if (*us == uc)
			return ((void *)us);
		us++;
	}
	return (NULL);
}

//int main()
//{
//	printf("%s\n", (char *)ft_memchr((void *)"hmakino-42", '4', 9));
//	printf("%s\n", (char *)memchr((void *)"hmakino-42", '4', 9));
//	printf("%s\n", (char *)ft_memchr((void *)"hmakino-42", '\0', 11));
//	printf("%s\n", (char *)memchr((void *)"hmakino-42", '\0', 11));
//}
