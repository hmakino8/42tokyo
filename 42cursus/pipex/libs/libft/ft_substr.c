/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiroaki <hiroaki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 11:25:39 by hiroaki           #+#    #+#             */
/*   Updated: 2022/03/10 03:07:27 by hmakino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	sub_len;
	char	*substr;

	if (!s)
		return (NULL);
	if (ft_strlen(s) < start)
		return (ft_strdup(""));
	sub_len = ft_strlen(s + start);
	if (sub_len < len)
		len = sub_len;
	substr = (char *)malloc(len + 1);
	if (!substr)
		return (NULL);
	ft_strlcpy(substr, s + start, len + 1);
	return (substr);
}

//#include <stdio.h>
//
//int main(void)
//{
//	char *s;
//
//	printf("***********************************\n");
//	printf("%s\n", ft_substr("hmakino-42", 8, 42));
//	printf("***********************************\n");
//	return (0);
//}
