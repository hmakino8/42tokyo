#include "libft.h"

int	ft_isalpha(int c)
{
	return (('a' <= c && c <= 'z')|| ('A' <= c && c <= 'Z'));
}

//int main(void)
//{
//	printf("a = %d\n", ft_isalpha('a'));
//	printf("~ = %d\n", ft_isalpha('~'));
//}
