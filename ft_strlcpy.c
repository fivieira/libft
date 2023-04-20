/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fivieira <fivieira@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 15:40:04 by fivieira          #+#    #+#             */
/*   Updated: 2023/04/20 18:32:16 by fivieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (!src)
		return (0);
	if (size > 0)
	{
		while (src[i] != '\0' && (i < (size - 1)))
		{
		dest[i] = src[i];
		i++;
		}
		dest[i] = '\0';
	}
	if (size == 0)
		dest[ft_strlen(dest)] = '\0';
	while (src[i] != '\0')
		i++;
	return (i);
}
