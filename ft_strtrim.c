/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fivieira <fivieira@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 16:03:31 by fivieira          #+#    #+#             */
/*   Updated: 2023/04/22 17:03:18 by fivieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
    int		i;
	int		j;
	char	*str;

	str = (char *)malloc(sizeof(char) * (ft_strlen(s1) - ft_strlen(set) + 1));
	i = 0;
	j = 0;
	
}