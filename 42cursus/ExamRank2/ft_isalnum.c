#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}

//int main(void)
//{
//	printf("0 = %d\n", ft_isalnum('0'));
//	printf("a = %d\n", ft_isalnum('a'));
//	printf("~ = %d\n", ft_isalnum('~'));
//}
