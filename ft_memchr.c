/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bryger <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 12:41:55 by bryger            #+#    #+#             */
/*   Updated: 2020/11/22 13:46:48 by bryger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	uc;
	unsigned char	*src;
	size_t			i;

	uc = (unsigned char)c;
	src = (unsigned char *)s;
	i = 0;
	while (n--)
	{
		if (src[i] == uc)
			return (src + i);
		else
			i++;
	}
	return (0);
}
