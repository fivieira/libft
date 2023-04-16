/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fivieira <fivieira@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 14:33:27 by fivieira          #+#    #+#             */
/*   Updated: 2023/04/15 15:29:40 by fivieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void	*str1, const void	*str2, size_t	n)
{
	unsigned char	*mem;
	unsigned char	*tocopy;
	unsigned int	count;

	count = 0;
	mem = str1;
	tocopy = (unsigned char *) str2;
	while (count < n)
	{
		mem[count] = tocopy[count];
		count++;
	}
	return (mem);
}
