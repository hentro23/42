/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkviria <gkviria@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 15:51:18 by gkviria           #+#    #+#             */
/*   Updated: 2023/09/02 16:33:27 by gkviria          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	const char		*ss1;
	const char		*ss2;

	ss1 = (const char *) s1;
	ss2 = (const char *) s2;
	i = 0;
	while (i < n && (*ss1 || *ss2))
	{
		if (*ss1 != *ss2)
		{
			return (*ss1 - *ss2);
		}
		ss1++;
		ss2++;
		i++;
	}
	return (0);
}
