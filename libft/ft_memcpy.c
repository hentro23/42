/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkviria <gkviria@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 10:09:26 by gkviria           #+#    #+#             */
/*   Updated: 2024/05/03 10:53:41 by gkviria          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int	i;
	void			*ret;

	i = 0;
	ret = dest;
	while (i < n)
	{
		if (src != NULL && dest != NULL)
		{
			*(char *)dest = *(char *)src;
			dest++;
			src++;
		}
		i++;
	}
	return (ret);
}
