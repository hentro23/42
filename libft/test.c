/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kosta <kosta@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 17:01:01 by gkviria           #+#    #+#             */
/*   Updated: 2024/04/28 19:21:11 by kosta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	int	i;
	char	str[] = "test";
	char	tst[] = "test";

	i = 0;
	void *tmp = memset(str, '*', 5);
	void *tmp2 = ft_memset(tst, '*', 5);
	while (str[i] != '\0')
	{
		printf("%c", tst[i]);
		i++;
	}
	return (0);
}
