/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bryger <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 13:25:45 by bryger            #+#    #+#             */
/*   Updated: 2020/11/25 12:53:33 by bryger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t dst_len;
	size_t res_len;
	size_t buf_res;

	res_len = 0;
	dst_len = ft_strlen(dst);
	if (dstsize <= dst_len)
		buf_res = dstsize;
	else
		buf_res = dst_len;
	res_len = buf_res + ft_strlen(src);
	if (!(dstsize <= dst_len))
	{
		dst += dst_len;
		dstsize -= dst_len;
		while (*src && dstsize-- > 1)
			*dst++ = *src++;
		*dst = '\0';
	}
	return (res_len);
}
