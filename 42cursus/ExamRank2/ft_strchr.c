#include "libft.h"

char *ft_strchr(const char *s, int c)
{
	while (*s || (!*s && !c))
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	return (NULL);
}

//int main()
//{
//	char s[] = "hmakino-42tokyo";
//	int c = '4';
//
//	printf("%s\n", ft_strchr(s, c));
//	printf("%s\n", strchr(s, '\0'));
//}
