/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bryger <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 12:47:53 by bryger            #+#    #+#             */
/*   Updated: 2020/11/25 12:48:18 by bryger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char		*s1;
	const char	*s2;
	size_t		i;

	i = 0;
	s2 = (const char *)src;
	s1 = (char *)dst;
	if (dst == src)
		return (dst);
	if (s1 > s2)
	{
		while (n--)
			s1[n - i] = s2[n - i];
		return (dst);
	}
	else
	{
		while (n-- > 0)
		{
			*s1++ = *s2++;
		}
		return (dst);
	}
}
