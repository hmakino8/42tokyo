#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
	void *ret;
	size_t alloc_size = 1;

	if (size != 0 && count < SIZE_MAX / size)
		alloc_size = count * size;
	ret = malloc(alloc_size);
	if (!ret)
		return (NULL);
	ft_bzero(ret, alloc_size);
	return (ret);
}

//int main()
//{
//	char *ret = ft_calloc(3, sizeof(char));
//	if (!ret)
//		return (1);
//	ret[0] = '4';
//	ret[1] = '2';
//	printf("ret len = %zu\n", ft_strlen(ret));
//	printf("ret = %s\n", ret);
//}
