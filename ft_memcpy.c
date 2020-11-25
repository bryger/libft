/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bryger <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 12:46:24 by bryger            #+#    #+#             */
/*   Updated: 2020/11/25 12:46:21 by bryger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*dest;
	const char	*sorc;

	dest = (char *)dst;
	sorc = (const char *)src;
	if ((dst == src || n == 0))
		return (dest);
	while (n--)
		dest[n] = sorc[n];
	return (dest);
}
