/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bryger <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 12:49:20 by bryger            #+#    #+#             */
/*   Updated: 2020/11/25 12:59:57 by bryger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t n)
{
	int				i;
	unsigned char	*d;

	i = 0;
	d = (unsigned char *)b;
	while (n--)
	{
		d[i] = c;
		i++;
	}
	return (b = d);
}
