/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkviria <gkviria@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 19:54:59 by gkviria           #+#    #+#             */
/*   Updated: 2023/09/02 15:45:43 by gkviria          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>

int	ft_str_is_printable(int a)
{
	if (a < 32 || a > 126)
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
	char	tmp = 19;
	char	tab[11] = {tmp, 'F', 'T', 'A', 'Z', 'A', 'Z', 'S', 'R', 'H'};

	int	sign = ft_str_is_printable(tab);
	char	i = 127;

	printf("%d", sign);
	return (0);
}*/