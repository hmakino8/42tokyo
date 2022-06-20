#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t i;

	i = 0;
	while(s[i])
		i++;
	return (i);
}

//int main()
//{
//	printf("%zu\n", ft_strlen("hmakino"));
//}
