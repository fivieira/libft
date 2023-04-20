/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fivieira <fivieira@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 16:40:35 by fivieira          #+#    #+#             */
/*   Updated: 2023/04/20 17:26:26 by fivieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t	i;
	char	*tosearch;

	i = 0;
	tosearch = (char *) str;
	while (tosearch[i] != '\0' && i < n)
	{
		if (tosearch[i] == c)
		{
			return ((char *)(tosearch + i));
		}
		i++;
	}
	return (NULL);
}

// int main(void)
// {
// 	char str[] = "Eu.tenho";

// 	printf("Minha funcao: %s\n",ft_memchr(str,'.',5));
// 	printf("funcao Original: %s\n",memchr(str,'.',5));

// }
