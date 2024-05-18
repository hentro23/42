/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkviria <gkviria@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 19:54:59 by gkviria           #+#    #+#             */
/*   Updated: 2023/10/12 18:44:24 by gkviria          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>

int	ft_isalpha(int a)
{
	if (a < 65 || (a > 90 && a < 97) || a > 122)
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
	char	tab[] = "STa2zlsdjs";

	int	sign = ft_str_is_alpha(tab);
	printf("%d", sign);
	return (0);
}*/
