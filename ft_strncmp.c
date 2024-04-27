/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkviria <gkviria@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 19:54:59 by gkviria           #+#    #+#             */
/*   Updated: 2023/06/15 13:55:45 by gkviria          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// #include <stdio.h>
// #include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((*s1 || *s2) && i < n)
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
		i++;
	}
	return (0);
}
// int	main(void)
// {
// 	char	*tab;
// 	char	*tab2;
// 	int		result;
// 	int		result2;

// 	tab = "piqli";
// 	tab2 = "pirvelli";
// 	result = ft_strncmp(tab, tab2, 3);
// 	result2 = strncmp(tab, tab2, 3);
// 	printf("%d %d", result, result2);
// 	return (0);
// }