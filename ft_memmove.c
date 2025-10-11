/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssowul <ssowul@student.42warsaw.pl>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 17:01:36 by ssowul            #+#    #+#             */
/*   Updated: 2025/10/11 17:31:22 by ssowul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t	i;
	int	move_one_cell;
	const unsigned char	*from;
	unsigned char	*to;

	if (src == dst)
		return (dst);
	move_one_cell = 1;
	from = src;
	to = dst;
	if (src < dst)
	{
		from += n - 1;
		to += n - 1;
		move_one_cell = -1;
	}
	i = 0;
	while (i++ < n)
	{
		*to = *from;
		from += move_one_cell;
		to += move_one_cell;
	}
	return (dst);
}
