/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fivieira <fivieira@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 19:47:03 by fivieira          #+#    #+#             */
/*   Updated: 2023/04/16 17:24:42 by fivieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;

	i = 0;
	while (str1[i] != '\0' || str2[i] != '\0' && i < n)
	{
		if (str1[i] != str2[i])
		{
			return (str1[i] - str2[i]);
		}
		i++;
	}
	return (0);
}

// int	main (void)
// {
// 	char str1[]="tla";
// 	char str2[]="Ola";
// 	int ret;

// 	ret = ft_strncmp(str1,str2,3);
// 	   if(ret < 0) {
//       printf("str1 is less than str2\n");
//    } else if(ret > 0) {
//       printf("str2 is less than str1\n");
//    } else {
//       printf("str1 is equal to str2\n");
//    }

// }