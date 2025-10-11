/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssowul <ssowul@student.42warsaw.pl>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/04 20:44:46 by ssowul            #+#    #+#             */
/*   Updated: 2025/10/05 21:26:41 by ssowul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	ft_bzero(void *p, size_t n)
{
	size_t	i;
	unsigned char	*mem_addr;

	mem_addr = p;
	i = 0;
	while (i++ < n)
		*mem_addr++ = 0;
}
