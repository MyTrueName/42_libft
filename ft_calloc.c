/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssowul <ssowul@student.42warsaw.pl>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 00:26:36 by ssowul            #+#    #+#             */
/*   Updated: 2025/10/17 01:18:48 by ssowul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	detected_overflow(size_t a, size_t b)
{
	size_t	mul;
	
	mul = a * b;
	if(mul/a != b)
		return (1);
	return (0);
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;

	if(nmemb == 0 || size == 0)
		return (malloc(0));
	else if (detected_overflow(nmemb, size))
		return ((void *)0);
	else
	{
		p = malloc(nmemb * size);
		if (p == (void *)0)
			return (p);
		else
		{}
			//bzero(p, size);
	}
	return (p);
}
