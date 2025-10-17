/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssowul <ssowul@student.42warsaw.pl>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 11:39:29 by ssowul            #+#    #+#             */
/*   Updated: 2025/10/16 00:22:55 by ssowul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	is_whitespace(char c)
{
	return (c == ' ' || c == '\t' || c == '\n' || c == '\v'
			|| c == '\f' || c == '\r');
}

static int	set_sign(char c, int *i)
{
	if(c == '+')
		return (1);
	else if(c == '-')
	{
		*i = -1;
		return (1);
	}
	else
		return (0);
}

static int	int_from_string(const char *str)
{
	int	i;
	int	converted;

	i = 0;
	converted = 0;
	while(str[i] >= '0' && str[i] <= '9' && str[i] != '\n')
	{
		converted = (converted * 10) + (str[i] - 48);
		i++;
	}
	return (converted);
}

int	ft_atoi(const char *str)
{
	int	result;
	int	i;
	int	sign;

	result = 0;
	sign = 1;
	i = 0;
	while(is_whitespace(str[i]) && str[i])
		i++;
	if(set_sign(str[i], &sign) && str[i])
		i++;
	result = sign * int_from_string(&str[i]);
	return (result);
}
/*
	printf("\n----------test atoi----------\n\n");
	{
	printf("----------test1----------\n");
	char *atoiVar1 = "123";
	printf("inp: [ %s ]\n", atoiVar1);
	printf("exp: [ %s ]\n", "123");
	printf("out: [ %d ]\n", ft_atoi(atoiVar1));
	printf("post output\n");
	}
	{
	printf("----------test2----------\n");
	char *atoiVar1 = "0";
	printf("inp: [ %s ]\n", atoiVar1);
	printf("exp: [ %s ]\n", "0");
	printf("out: [ %d ]\n", ft_atoi(atoiVar1));
	printf("post output\n");
	}
	{
	printf("----------test3----------\n");
	char *atoiVar1 = "-1";
	printf("inp: [ %s ]\n", atoiVar1);
	printf("exp: [ %s ]\n", "-1");
	printf("out: [ %d ]\n", ft_atoi(atoiVar1));
	printf("post output\n");
	}
	{
	printf("----------test4----------\n");
	char *atoiVar1 = "2147483647";
	printf("inp: [ %s ]\n", atoiVar1);
	printf("exp: [ %s ]\n", "2147483647");
	printf("out: [ %d ]\n", ft_atoi(atoiVar1));
	printf("post output\n");
	}
	{
	printf("----------test5----------\n");
	char *atoiVar1 = "-2147483648";
	printf("inp: [ %s ]\n", atoiVar1);
	printf("exp: [ %s ]\n", "-2147483648");
	printf("out: [ %d ]\n", ft_atoi(atoiVar1));
	printf("post output\n");
	}
	{
	printf("----------test6----------\n");
	char *atoiVar1 = "					-2147483648";
	printf("inp: [ %s ]\n", atoiVar1);
	printf("exp: [ %s ]\n", "-2147483648");
	printf("out: [ %d ]\n", ft_atoi(atoiVar1));
	printf("post output\n");
	}{
	printf("----------test7----------\n");
	char *atoiVar1 = "\ta\v-2147483648";
	printf("inp: [ %s ]\n", atoiVar1);
	printf("exp: [ %s ]\n", "0");
	printf("out: [ %d ]\n", ft_atoi(atoiVar1));
	printf("post output\n");
	}
	printf("\n---------- end atoi----------\n\n");
	*/
