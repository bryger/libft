/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bryger <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 13:23:05 by bryger            #+#    #+#             */
/*   Updated: 2020/11/25 12:42:55 by bryger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void *mas;

	mas = malloc(count * size);
	if (mas == NULL)
		return (NULL);
	ft_memset(mas, 0, count * size);
	return (mas);
}
