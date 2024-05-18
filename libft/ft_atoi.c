/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkviria <gkviria@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 19:54:59 by gkviria           #+#    #+#             */
/*   Updated: 2023/06/26 16:59:54 by gkviria          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>

int	ft_atoi(char *str)
{
	int	sign;
	int	count;
	int	integer;

	sign = 0;
	count = 0;
	integer = 0;
	while (!(*str >= '0' && *str <= '9') && *str)
	{
		if (*str == '-')
			sign++;
		str++;
	}
	sign = sign % 2;
	while (*str && *str >= '0' && *str <= '9')
	{
		integer = integer * 10 + (*str - '0');
		str++;
	}
	if (sign)
		integer *= -1;
	return (integer);
}

// int	main(int argc, char *argv[])
// {
// 	int	x;
// 	x = ft_atoi(argv[1]);
// 	printf("%d", x);
// 	return (0);
// }