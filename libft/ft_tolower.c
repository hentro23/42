/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkviria <gkviria@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 19:54:59 by gkviria           #+#    #+#             */
/*   Updated: 2023/06/14 16:22:33 by gkviria          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	char	*temp;

	temp = str;
	while (*str)
	{
		if (*str > 64 && *str < 91)
		{
			*str = *str + 32;
		}
		str++;
	}
	str = temp;
	return (str);
}

/*int	main(void)
{
	char	tmp = 19;
	char	tab[11] = {tmp, 'F', 't', 'A', 'Z', 'a', 'z', 'S', 'r', 'H'};
	char	*tab2;

	tab2 = ft_strlowcase(tab);
	tab2+=1;

	write (1, tab2, 1);
	return (0);
}*/