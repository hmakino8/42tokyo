/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmakino <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 12:25:54 by hmakino           #+#    #+#             */
/*   Updated: 2021/12/09 15:07:40 by hmakino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char	*str)
{
	int	count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

char	*ft_malloc(int size, char **strs, char *sep)
{
	int		dynamic_len;
	char	*dynamic;
	int		i;

	i = 0;
	dynamic_len = ft_strlen(sep) * (size - 1);
	while (i < size)
		dynamic_len += ft_strlen(strs[i++]);
	dynamic = (char *)malloc(sizeof(char) * dynamic_len + 1);
	if (dynamic == NULL)
		return (0);
	return (dynamic);
}

char	*ft_empty_malloc(void)
{
	char	*dynamic;

	dynamic = (char *)malloc(sizeof(char));
	if (dynamic == NULL)
		*dynamic = '\0';
	return (dynamic);
}

char	*ft_input(int	size, char	**strs, char	*sep, char	*dynamic)
{
	int		i;
	int		j;
	int		k;
	char	*n;

	n = dynamic;
	i = 0;
	while (i < size)
	{
		j = 0;
		k = 0;
		while (strs[i][j])
		{
			*n = strs[i][j++];
			n++;
		}
		while (sep[k] && i < size - 1)
		{
			*n = sep[k++];
			n++;
		}
		i++;
	}
	*n = '\0';
	return (dynamic);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*dynamic;

	if (size == 0)
		dynamic = ft_empty_malloc();
	dynamic = ft_malloc(size, strs, sep);
	return (ft_input(size, strs, sep, dynamic));
}
/*
#include<stdio.h>
int main()
{
char *strs[]={"abcde","vvvv","eeeeee"};
int size=3;
char *sep="BBBBBB";
char *new;
new=ft_strjoin(size,strs,sep);
printf("%s",new);
free(new);
}
*/
