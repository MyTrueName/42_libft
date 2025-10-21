/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssowul <ssowul@student.42warsaw.pl>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 11:48:42 by ssowul            #+#    #+#             */
/*   Updated: 2025/10/21 03:37:08 by ssowul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static size_t	ft_strlen(char const *str)
{
	size_t	len;
	
	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

static char	*ft_allocate(size_t begin, size_t end, size_t maximum)
{
	char	*c;
	if (maximum <= end - begin)
		c = (char *)malloc(sizeof(char) * (maximum + 1));
	else
		c = (char *)malloc(sizeof(char) * (end - begin + 1));
	return (c);
}

static char	*ft_empty_string(void)
{
	char	*c;

	c = malloc(1);
	c[0] = '\0';
	return (c);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	begin;
	size_t	end;
	char	*copy;
	size_t	i;

	if (!s)
		return ((void *)0);
	begin = (size_t)start;
	end = ft_strlen(s);
	i = 0;
	if (begin >= end || len == 0)
		return (ft_empty_string());
	copy = ft_allocate(begin, end, len);
	if (copy != (void *)0)
	{
		while (s[begin + i] != '\0' && i < len && i < end - begin)
		{
			copy[i] = s[begin + i];
			i++;
		}
		copy[i] = '\0';
	}
	return (copy);
}
