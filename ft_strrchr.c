/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkviria <gkviria@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 13:18:47 by gkviria           #+#    #+#             */
/*   Updated: 2023/10/12 19:28:45 by gkviria          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return ((char *)s);
		}
		s++;
	}
	return (NULL);
}

/*int	main(void)
{
	char *str = ft_strchr("strrarsaa", 114);
	while (*str)
	{
		printf("%c", *str);
		str++;
	}
	return 0;
}*/