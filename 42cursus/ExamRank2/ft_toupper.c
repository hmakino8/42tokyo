#include "libft.h"

int ft_toupper(int c)
{
	if ('a' <= c && c <= 'z')
		return (c - ('a' - 'A'));
	return (c);
}

//int main()
//{
//	printf("a => %c\n", ft_toupper('a'));
//	printf("B => %c\n", ft_toupper('B'));
//	printf("~ => %c\n", ft_toupper('~'));
//}
