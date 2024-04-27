/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkviria <gkviria@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 13:18:47 by gkviria           #+#    #+#             */
/*   Updated: 2023/08/27 16:55:48 by gkviria          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*ss;
	size_t		i;

	i = 0;
	ss = (const char *)s;
	while (i < n && *ss)
	{
		if (*ss == c)
		{
			return (*ss);
		}
		ss++;
		i++;
	}
	return (0);
}

int	main(void)
{
	char *str = (char *) ft_memchr("srrarsaa", 114, 3);
	while (*str)
	{
		printf("%c", *str);
		str++;
	}
	return (0);
}