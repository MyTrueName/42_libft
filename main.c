/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssowul <ssowul@student.42warsaw.pl>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 14:35:02 by ssowul            #+#    #+#             */
/*   Updated: 2025/10/11 17:36:18 by ssowul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	main(void)
{
	printf("\n----------test isalpha----------\n\n");
	int isalphaVar1 = 0;
	int isalphaVar2 = '8';
	char isalphaVar3 = 'A';
	char isalphaVar4 = '1';
	char isalphaVar5 = ' ';

	printf("----------test1----------\n");
	printf("inp: [ %c ]\n", isalphaVar1);
	printf("exp: [ %c ]\n", '0');
	printf("out: [ %d ]\n", ft_isalpha(isalphaVar1));
	printf("----------test2----------\n");
	printf("inp: [ %c ]\n", isalphaVar2);
	printf("exp: [ %c ]\n", '1');
	printf("out: [ %d ]\n", ft_isalpha(isalphaVar2));
	printf("----------test3----------\n");
	printf("inp: [ %c ]\n", isalphaVar3);
	printf("exp: [ %c ]\n", '1');
	printf("out: [ %d ]\n", ft_isalpha(isalphaVar3));
	printf("----------test4----------\n");
	printf("inp: [ %c ]\n", isalphaVar4);
	printf("exp: [ %c ]\n", '0');
	printf("out: [ %d ]\n", ft_isalpha(isalphaVar4));
	printf("----------test5----------\n");
	printf("inp: [ %c ]\n", isalphaVar5);
	printf("exp: [ %c ]\n", '0');
	printf("out: [ %d ]\n", ft_isalpha(isalphaVar5));
	printf("\n---------- end isalpha----------\n\n");

	printf("\n----------test isdigit----------\n\n");
	int isdigitVar1 = 0;
	int isdigitVar2 = '8';
	char isdigitVar3 = 'A';
	char isdigitVar4 = '1';
	char isdigitVar5 = ' ';

	printf("----------test1----------\n");
	printf("inp: [ %c ]\n", isdigitVar1);
	printf("exp: [ %c ]\n", '0');
	printf("out: [ %d ]\n", ft_isdigit(isdigitVar1));
	printf("----------test2----------\n");
	printf("inp: [ %c ]\n", isdigitVar2);
	printf("exp: [ %c ]\n", '1');
	printf("out: [ %d ]\n", ft_isdigit(isdigitVar2));
	printf("----------test3----------\n");
	printf("inp: [ %c ]\n", isdigitVar3);
	printf("exp: [ %c ]\n", '0');
	printf("out: [ %d ]\n", ft_isdigit(isdigitVar3));
	printf("----------test4----------\n");
	printf("inp: [ %c ]\n", isdigitVar4);
	printf("exp: [ %c ]\n", '1');
	printf("out: [ %d ]\n", ft_isdigit(isdigitVar4));
	printf("----------test5----------\n");
	printf("inp: [ %c ]\n", isdigitVar5);
	printf("exp: [ %c ]\n", '0');
	printf("out: [ %d ]\n", ft_isdigit(isdigitVar5));
	printf("\n---------- end isdigit----------\n\n");

	printf("\n----------test isalnum----------\n\n");
	int isalnumVar1 = 0;
	int isalnumVar2 = '8';
	char isalnumVar3 = 'A';
	char isalnumVar4 = '1';
	char isalnumVar5 = ' ';

	printf("----------test1----------\n");
	printf("inp: [ %c ]\n", isalnumVar1);
	printf("exp: [ %c ]\n", '0');
	printf("out: [ %d ]\n", ft_isalnum(isalnumVar1));
	printf("----------test2----------\n");
	printf("inp: [ %c ]\n", isalnumVar2);
	printf("exp: [ %c ]\n", '1');
	printf("out: [ %d ]\n", ft_isalnum(isalnumVar2));
	printf("----------test3----------\n");
	printf("inp: [ %c ]\n", isalnumVar3);
	printf("exp: [ %c ]\n", '1');
	printf("out: [ %d ]\n", ft_isalnum(isalnumVar3));
	printf("----------test4----------\n");
	printf("inp: [ %c ]\n", isalnumVar4);
	printf("exp: [ %c ]\n", '1');
	printf("out: [ %d ]\n", ft_isalnum(isalnumVar4));
	printf("----------test5----------\n");
	printf("inp: [ %c ]\n", isalnumVar5);
	printf("exp: [ %c ]\n", '0');
	printf("out: [ %d ]\n", ft_isalnum(isalnumVar5));
	printf("\n---------- end isalnum----------\n\n");

	printf("\n----------test isascii----------\n\n");
	int isasciiVar1 = 0;
	int isasciiVar2 = '8';
	char isasciiVar3 = 'A';
	char isasciiVar4 = '1';
	char isasciiVar5 = ' ';
	char isasciiVar6 = 130;

	printf("----------test1----------\n");
	printf("inp: [ %c ]\n", isasciiVar1);
	printf("exp: [ %c ]\n", '1');
	printf("out: [ %d ]\n", ft_isascii(isasciiVar1));
	printf("----------test2----------\n");
	printf("inp: [ %c ]\n", isasciiVar2);
	printf("exp: [ %c ]\n", '1');
	printf("out: [ %d ]\n", ft_isascii(isasciiVar2));
	printf("----------test3----------\n");
	printf("inp: [ %c ]\n", isasciiVar3);
	printf("exp: [ %c ]\n", '1');
	printf("out: [ %d ]\n", ft_isascii(isasciiVar3));
	printf("----------test4----------\n");
	printf("inp: [ %c ]\n", isasciiVar4);
	printf("exp: [ %c ]\n", '1');
	printf("out: [ %d ]\n", ft_isascii(isasciiVar4));
	printf("----------test5----------\n");
	printf("inp: [ %c ]\n", isasciiVar5);
	printf("exp: [ %c ]\n", '1');
	printf("out: [ %d ]\n", ft_isascii(isasciiVar5));
	printf("----------test6----------\n");
	printf("inp: [ %c ]\n", isasciiVar6);
	printf("exp: [ %c ]\n", '0');
	printf("out: [ %d ]\n", ft_isascii(isasciiVar6));
	printf("\n---------- end isascii----------\n\n");

	printf("\n----------test isprint----------\n\n");
	int isprintVar1 = 31;
	int isprintVar2 = 32;
	char isprintVar3 = 'A';
	char isprintVar4 = '~';
	char isprintVar5 = 127;
	char isprintVar6 = 129;

	printf("----------test1----------\n");
	printf("inp: [ %c ]\n", isprintVar1);
	printf("exp: [ %c ]\n", '0');
	printf("out: [ %d ]\n", ft_isprint(isprintVar1));
	printf("----------test2----------\n");
	printf("inp: [ %c ]\n", isprintVar2);
	printf("exp: [ %c ]\n", '1');
	printf("out: [ %d ]\n", ft_isprint(isprintVar2));
	printf("----------test3----------\n");
	printf("inp: [ %c ]\n", isprintVar3);
	printf("exp: [ %c ]\n", '1');
	printf("out: [ %d ]\n", ft_isprint(isprintVar3));
	printf("----------test4----------\n");
	printf("inp: [ %c ]\n", isprintVar4);
	printf("exp: [ %c ]\n", '1');
	printf("out: [ %d ]\n", ft_isprint(isprintVar4));
	printf("----------test5----------\n");
	printf("inp: [ %c ]\n", isprintVar5);
	printf("exp: [ %c ]\n", '0');
	printf("out: [ %d ]\n", ft_isprint(isprintVar5));
	printf("----------test6----------\n");
	printf("inp: [ %c ]\n", isprintVar6);
	printf("exp: [ %c ]\n", '0');
	printf("out: [ %d ]\n", ft_isprint(isprintVar6));
	printf("\n---------- end isprint----------\n\n");

	printf("\n----------test strlen----------\n\n");
	char *strlenVar1 = "\0";
	char *strlenVar2 = "hello";
	char *strlenVar3 = "     ";
	char *strlenVar4 = "";
	char *strlenVar5 = "0000";
	char *strlenVar6 = "		";

	printf("----------test1----------\n");
	printf("inp: [ %s ]\n", strlenVar1);
	printf("exp: [ %c ]\n", '0');
	printf("out: [ %d ]\n", ft_strlen(strlenVar1));
	printf("----------test2----------\n");
	printf("inp: [ %s ]\n", strlenVar2);
	printf("exp: [ %c ]\n", '5');
	printf("out: [ %d ]\n", ft_strlen(strlenVar2));
	printf("----------test3----------\n");
	printf("inp: [ %s ]\n", strlenVar3);
	printf("exp: [ %c ]\n", '5');
	printf("out: [ %d ]\n", ft_strlen(strlenVar3));
	printf("----------test4----------\n");
	printf("inp: [ %s ]\n", strlenVar4);
	printf("exp: [ %c ]\n", '0');
	printf("out: [ %d ]\n", ft_strlen(strlenVar4));
	printf("----------test5----------\n");
	printf("inp: [ %s ]\n", strlenVar5);
	printf("exp: [ %c ]\n", '4');
	printf("out: [ %d ]\n", ft_strlen(strlenVar5));
	printf("----------test6----------\n");
	printf("inp: [ %s ]\n", strlenVar6);
	printf("exp: [ %c ]\n", '2');
	printf("out: [ %d ]\n", ft_strlen(strlenVar6));
	printf("\n---------- end strlen----------\n\n");

	printf("\n----------test memset----------\n\n");
	char memsetVar1[] = "NOTHING";
	char memsetVar2[5];
	int *memsetVar3 = NULL;
	int memsetVar4[] = {1, 23, 33, 44444, 5123};

	printf("----------test1----------\n");
	printf("inp: [ %s ]\n", memsetVar1);
	printf("exp: [ %s ]\n", "--THING");
	ft_memset(memsetVar1, '-', 2);
	printf("out: [ %s ]\n", memsetVar1);
	printf("----------test2----------\n");
	printf("inp: [ %s ]\n", memsetVar2);
	printf("exp: [ %s ]\n", "undefined behavior");
	ft_memset(memsetVar2, '+', 1);
	printf("out: [ %s ]\n", memsetVar2);
	printf("----------test3----------\n");
	printf("inp: [ %ls ]\n", memsetVar3);
	printf("exp: [ %s ]\n", "segmentation fault if uncommented");
	//ft_memset(memsetVar3, '~', 1);
	printf("out: [ %ls ]\n", memsetVar3);
	printf("----------test4----------\n");
	printf("inp: [ ");
	for(int i = 0; i < 5; i++) {
		printf("%d ", memsetVar4[i]);
	}
	printf(" ]\n");
	printf("exp: [ changed array based on n bytes ]\n");
	ft_memset(memsetVar4, '-', 5);
	printf("out: [ ");
	for(int i = 0; i < 5; i++) {
		printf("%d ", memsetVar4[i]);
	}
	printf(" ]\n");
	printf("\n---------- end memset----------\n\n");

	printf("\n----------test bzero----------\n\n");
	char bzeroVar1[] = "NOTHING";
	char bzeroVar2[5] = "\t\t00a";
	int *bzeroVar3 = NULL;
	int bzeroVar4[] = {1, 23, 33, 44444, 5123};

	printf("----------test1----------\n");
	printf("inp: [ %s ]\n", bzeroVar1);
	printf("exp: [ %s ]\n", "\0");
	ft_bzero(bzeroVar1, 1);
	printf("out: [ %s ]\n", bzeroVar1);
	printf("----------test2----------\n");
	printf("inp: [ %s ]\n", bzeroVar2);
	printf("exp: [ %s ]\n", "\0");
	ft_bzero(bzeroVar2, 1);
	printf("out: [ %s ]\n", bzeroVar2);
	printf("----------test3----------\n");
	printf("inp: [ %ls ]\n", bzeroVar3);
	printf("exp: [ %s ]\n", "segmentation fault if uncommented");
	//ft_bzero(bzeroVar3, 1);
	printf("out: [ %ls ]\n", bzeroVar3);
	printf("----------test4----------\n");
	printf("inp: [ ");
	for(int i = 0; i < 5; i++) {
		printf("%d ", bzeroVar4[i]);
	}
	printf(" ]\n");
	printf("exp: [ changed array based on n bytes ]\n");
	ft_bzero(bzeroVar4, 5);
	printf("out: [ ");
	for(int i = 0; i < 5; i++) {
		printf("%d ", bzeroVar4[i]);
	}
	printf(" ]\n");
	printf("\n---------- end bzero----------\n\n");

	printf("\n----------test memcpy----------\n\n");
	char memcpyVar1[] = "NOTHING";
	/*
	char memcpyVar2[5] = "\t\t00a";
	int *memcpyVar3 = NULL;
	int memcpyVar4[] = {1, 23, 33, 44444, 5123};
	*/
	printf("----------test1----------\n");
	printf("inp: [ %s ]\n", memcpyVar1);
	printf("exp: [ %s ]\n", "NOTNONG");
	ft_memcpy(memcpyVar1 + 3, memcpyVar1, 2);
	printf("out: [ %s ]\n", memcpyVar1);
	/*
	printf("----------test2----------\n");
	printf("inp: [ %s ]\n", memcpyVar2);
	printf("exp: [ %s ]\n", "\0");
	ft_memcpy(memcpyVar2, 1);
	printf("out: [ %s ]\n", memcpyVar2);
	printf("----------test3----------\n");
	printf("inp: [ %ls ]\n", memcpyVar3);
	printf("exp: [ %s ]\n", "segmentation fault if uncommented");
	//ft_memcpy(memcpyVar3, 1);
	printf("out: [ %ls ]\n", memcpyVar3);
	printf("----------test4----------\n");
	printf("inp: [ ");
	for(int i = 0; i < 5; i++) {
		printf("%d ", memcpyVar4[i]);
	}
	printf(" ]\n");
	printf("exp: [ changed array based on n bytes ]\n");
	ft_memcpy(memcpyVar4, 5);
	printf("out: [ ");
	for(int i = 0; i < 5; i++) {
		printf("%d ", memcpyVar4[i]);
	}
	printf(" ]\n");
	*/
	printf("\n---------- end memcpy----------\n\n");

	printf("\n----------test memmove----------\n\n");
	char memmoveVar1[] = "NOTHING";
	/*
	char memmoveVar2[5] = "\t\t00a";
	int *memmoveVar3 = NULL;
	int memmoveVar4[] = {1, 23, 33, 44444, 5123};
	*/
	printf("----------test1----------\n");
	printf("inp: [ %s ]\n", memmoveVar1);
	printf("exp: [ %s ]\n", "NOTNONG");
	ft_memmove(memmoveVar1 + 2, memmoveVar1, 4);
	printf("out: [ %s ]\n", memmoveVar1);
	/*
	printf("----------test2----------\n");
	printf("inp: [ %s ]\n", memmoveVar2);
	printf("exp: [ %s ]\n", "\0");
	ft_memmove(memmoveVar2, 1);
	printf("out: [ %s ]\n", memmoveVar2);
	printf("----------test3----------\n");
	printf("inp: [ %ls ]\n", memmoveVar3);
	printf("exp: [ %s ]\n", "segmentation fault if uncommented");
	//ft_memmove(memmoveVar3, 1);
	printf("out: [ %ls ]\n", memmoveVar3);
	printf("----------test4----------\n");
	printf("inp: [ ");
	for(int i = 0; i < 5; i++) {
		printf("%d ", memmoveVar4[i]);
	}
	printf(" ]\n");
	printf("exp: [ changed array based on n bytes ]\n");
	ft_memmove(memmoveVar4, 5);
	printf("out: [ ");
	for(int i = 0; i < 5; i++) {
		printf("%d ", memmoveVar4[i]);
	}
	printf(" ]\n");
	*/
	printf("\n---------- end memmove----------\n\n");


	return (0);
}
