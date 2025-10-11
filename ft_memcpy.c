/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssowul <ssowul@student.42warsaw.pl>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 21:29:14 by ssowul            #+#    #+#             */
/*   Updated: 2025/10/06 00:27:48 by ssowul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	const unsigned char	*from;
	unsigned char	*to;

	if (src < dest && src + n > dest)
		return (dest);
	else
	{
		i = 0;
		from = src;
		to = dest;
		while (i++ < n)
			*to++ = *from++;
	}
	return (dest);
}
