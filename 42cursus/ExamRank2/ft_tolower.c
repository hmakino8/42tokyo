#include "libft.h"

int ft_tolower(int c)
{
	if ('A' <= c && c <= 'Z')
		return (c + ('a' - 'A'));
	return (c);
}

//int main()
//{
//	printf("a => %c\n", ft_tolower('a'));
//	printf("B => %c\n", ft_tolower('B'));
//	printf("~ => %c\n", ft_tolower('~'));
//}
