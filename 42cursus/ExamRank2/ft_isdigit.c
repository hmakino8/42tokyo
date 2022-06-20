#include "libft.h"

int	ft_isdigit(int c)
{
	return ('0' <= c && c <= '9');
}

//int main(void)
//{
//	printf("0 = %d\n", ft_isdigit('0'));
//	printf("~ = %d\n", ft_isdigit('~'));
//}
