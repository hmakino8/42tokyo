/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiroaki <hiroaki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 11:25:39 by hiroaki           #+#    #+#             */
/*   Updated: 2022/06/20 09:38:48 by hmakino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	slen;
	unsigned int	dlen;
	char			*dup;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if (slen < start)
		return (ft_strdup(""));
	dlen = slen - start;
	if (len < dlen)
		dlen = len;
	dup = (char *)malloc(dlen + 1);
	if (!dup)
		return (NULL);
	ft_strlcpy(dup, s + start, dlen + 1);
	return (dup);
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
