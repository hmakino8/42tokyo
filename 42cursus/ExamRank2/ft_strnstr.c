#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char *hs = (char *)haystack;
	size_t hlen = ft_strlen(hs);
	size_t nlen = ft_strlen(needle);

	while (*hs && hlen-- >= nlen && nlen <= len--)
	{
		if (*hs == *needle && !ft_memcmp(hs, needle, nlen))
			return (hs);
		hs++;
	}
	return (NULL);
}

//int main()
//{
//	printf("%s\n", strnstr("hmakino-42tokyo", "42tokyo", 17));
//	printf("%s\n", ft_strnstr("hmakino-42tokyo", "42tokyo", 17));
//}
