/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fivieira <fivieira@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 18:57:09 by fivieira          #+#    #+#             */
/*   Updated: 2023/04/20 19:09:48 by fivieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int			i;
	int			j;
	const char	*ends;

	i = 0;
	j = 0;
	ends = s;
	while (ends[i] != '\0')
	{
		i++;
	}
	while (ends[i] != s[j])
	{
		if (ends[i] == c)
		{
			return ((char *)(s + i));
		}
		i--;
	}
	if (ends[i] == c)
	{
		return ((char *)(s + i));
	}
	return (NULL);
}

// int main (void)
// {
// 	char str[]= "e.u .tenho";
// 	printf("Minha funcao: %s\n", ft_strrchr(str,'\0'));
// }