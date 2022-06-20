#include "libft.h"

void *ft_memset(void *b, int c, size_t len)
{
	unsigned char *ub;
	unsigned char uc;

	ub = (unsigned char *)b;
	uc = (unsigned char)c;
	while(len--)
		*ub++ = uc;
	return (b);
}

//int main()
//{
//	char s[5];
//	int c = 'a';
//
//	ft_memset((void *)s, c, 4);
//	printf("s = %s\n", s);
//}
