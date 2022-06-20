#include "libft.h"

char *ft_strdup(const char *s1)
{
	char *sdup;
	size_t s1len = ft_strlen(s1);

	sdup = malloc(s1len + 1);
	if (!sdup)
		return (NULL);
	ft_strlcpy(sdup, s1, s1len + 1);
	return (sdup);
}

//int main()
//{
//	char *dst;
//	char src[] = "hmakino";
//
//	dst = ft_strdup(src);
//	if (!dst)
//		return (1);
//	printf("dst len = %zu\n", ft_strlen(dst));
//	printf("dst = %s\n", dst);
//}
