/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garouche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/25 14:23:59 by garouche          #+#    #+#             */
/*   Updated: 2016/11/28 17:49:16 by garouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		i;
	size_t		nb;
	char		*dst;
	const char	*s;

	nb = 0;
	dst = (char*)dest;
	s = (const char*)src;
	i = n - 1;
	if (dst < s)
		ft_memcpy(dest, src, n);
	else
		while (nb < n)
		{
			dst[i] = s[i];
			i--;
			nb++;
		}
	return (dst);
}
