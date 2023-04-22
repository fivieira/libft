/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fivieira <fivieira@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 17:23:36 by fivieira          #+#    #+#             */
/*   Updated: 2023/04/22 14:33:09 by fivieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*string;

	i = 0;
	j = 0;
	if (s[i] == '\0')
		return (NULL);
	string = (char *)malloc(sizeof(char) * (len + 1));
	if (!string)
		return (NULL);
	while (s[i] != '\0')
	{
		if (i >= start && j < len)
		{
			string[j] = s[i];
			j++;
		}
		i++;
	}
	string[j] = '\0';
	return (string);
}

// int main (void)
// {
// 	char str[] = "Teste subtring";

// 	printf("A minha subString: %s\n",ft_substr(str, 2 ,0));
// }