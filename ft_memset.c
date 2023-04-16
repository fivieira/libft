/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fivieira <fivieira@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 17:16:52 by fivieira          #+#    #+#             */
/*   Updated: 2023/04/15 15:26:22 by fivieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned int	count;
	unsigned char	*memory;

	count = 0;
	memory = str;
	while (count < n)
	{
		memory[count] = c;
		count++;
	}
	return (memory);
}
