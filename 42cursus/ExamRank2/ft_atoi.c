#include "libft.h"

int ft_atoi(const char *str)
{
	int sign = 1;
	long ln = 0;

	while (*str == ' ' || ('\t' <= *str && *str <= '\r'))
		str++;
	if (*str == '-')
		sign = -1;
	if (*str == '-' || *str == '+')
		str++;
	while ('0' <= *str && *str <= '9')
	{
		ln = (ln * 10) + (*str - '0');
		if (sign > 0 && ln > INT_MAX)
			return (INT_MAX);
		if (sign < 0 && ln < INT_MIN)
			return (INT_MIN);
	}
	return ((int)ln * sign);
}

//int main()
//{
//	printf("INT_MIN-1 = %d\n", ft_atoi("-2147483649"));
//	printf("INT_MAX+1 = %d\n", ft_atoi("2147483648"));
//	//atoi(NULL);
//}
