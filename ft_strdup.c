/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssowul <ssowul@student.42warsaw.pl>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 01:22:05 by ssowul            #+#    #+#             */
/*   Updated: 2025/10/17 01:40:04 by ssowul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	size_t	i;
	char	*p;

	i = 0;
	while(s[i] != '\0')
		i++;
	i++;
	p = malloc(i);
	if (p == (void *)0)
		return ((void *)0);
	while (i > 0)
	{
		p[i] = s[i];
		i--;
	}
	p[0] = s[0];
	return (p);
}
