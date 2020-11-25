/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bryger <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 13:26:41 by bryger            #+#    #+#             */
/*   Updated: 2020/11/22 14:49:16 by bryger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 'a' && c <= 'z'))
		c -= 32;
	else
		return (c);
	return (c);
}
