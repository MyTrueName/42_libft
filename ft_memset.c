/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssowul <ssowul@student.42warsaw.pl>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/04 20:26:33 by ssowul            #+#    #+#             */
/*   Updated: 2025/10/05 21:25:09 by ssowul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *p, int c, size_t n)
{
	size_t	i;
	unsigned char	*mem_adr;

	mem_adr = p;
	i = 0;
	while (i++ < n)
		*mem_adr++ = c;
	return (p);
}
