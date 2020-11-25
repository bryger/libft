/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bryger <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 13:24:40 by bryger            #+#    #+#             */
/*   Updated: 2020/11/25 12:51:16 by bryger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*sn;
	size_t	len;

	len = ft_strlen(s1) + 1;
	sn = malloc(sizeof(char) * len);
	if (!sn)
		return (0);
	sn = ft_memcpy(sn, s1, len);
	return (sn);
}
