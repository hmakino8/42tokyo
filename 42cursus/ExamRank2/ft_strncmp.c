#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (n--)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (0);
}

//int main()
//{
//	const char s1[] = "hmakino-42tpkyo";
//	const char s2[] = "hmakino-42tokyo";
//
//	printf("%d\n", ft_strncmp(s1, s2, 12));
//	printf("%d\n", strncmp(s1, s2, 12));
//	//strncmp(NULL, s2, 12);
//	//strncmp(s1, NULL, 12);
//	//strncmp(NULL, NULL, 12);
//}
