/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kosta <kosta@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 14:59:15 by gkviria           #+#    #+#             */
/*   Updated: 2024/05/01 13:40:49 by kosta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned int	a;
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	a = 0;
	while (a < n)
	{
		if (*ptr)
		{
			*ptr = '\0';
		}
		a++;
		ptr++;
	}
}
