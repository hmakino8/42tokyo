/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmakino <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 19:12:14 by hmakino           #+#    #+#             */
/*   Updated: 2021/11/30 19:49:53 by hmakino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str, int i)
{
	if (('A' <= str[i] && str[i] <= 'Z') || ('a' <= str[i] && str[i] <= 'z')
		|| ('0' <= str[i] && str[i] <= '9'))
	{
		return (0);
	}
	else
	{
		return (1);
	}
	return (0);
}

int	ft_strupcase(char *str, int i)
{
	if ('a' <= str[i] && str[i] <= 'z')
	{
		return (0);
	}
	else
	{
		return (1);
	}
	return (0);
}

void	ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
	{
		if ('A' <= str[i] && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
}

void	ft_strcapitalize(char *str)
{
	int	i;

	ft_strlowcase(str);
	i = 0;
	while (*(str + i) != '\0')
	{
		if (i == 0 && ft_strupcase(str, i) == 0)
		{
			str[i] -= 32;
			i++;
		}
		if (ft_str_is_alpha(str, i) == 1)
		{
			if (ft_strupcase(str, i + 1) == 0)
			{
				str[i + 1] -= 32;
			}
		}
		i++;
	}
}
//#include <stdio.h>
//
//int   main(void)
//{
//	int i = 0;
//	char    a[] = "salut, comMent Tu vas ? 42mot
//
//	ft_strcapitalize(a);
//	while (a[i] != '\0')
//	{
//		printf("%c", a[i]);
//		i++;
//	}
//	return (0);
//}
