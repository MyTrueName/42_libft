/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssowul <ssowul@student.42warsaw.pl>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 20:05:51 by ssowul            #+#    #+#             */
/*   Updated: 2025/10/06 00:29:01 by ssowul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);
int ft_strlen(char *str);
void	*ft_memset(void *p, int c, size_t n);
void	ft_bzero(void *p, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
