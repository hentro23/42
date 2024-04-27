/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkviria <gkviria@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 19:54:59 by gkviria           #+#    #+#             */
/*   Updated: 2023/09/02 15:46:05 by gkviria          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>

int	ft_isdigit(int a)
{
	if (a < 48 || a > 57)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}

/*int	main(void)
{
	char	tab[11] = {'1', '2', '3', '4', '5', '6', '7', '8', '9', '0'};

	int	sign = ft_str_is_numeric(tab);
	printf("%d", sign);
	return (0);
}*/