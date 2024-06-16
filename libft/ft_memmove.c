/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkviria <gkviria@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 10:54:28 by gkviria           #+#    #+#             */
/*   Updated: 2024/06/16 14:03:19 by gkviria          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*intoarr(const void *s2, size_t n);

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	unsigned int	i;
	void			*ret;
	void			*tmp;

	ret = s1;
	tmp = intoarr(s2, n);
	i = 0;
	while (i < n)
	{
		if (tmp != NULL && s1 != NULL)
		{
			*(char *)s1 = *(char *)tmp;
			s1++;
			tmp++;
		}
		i++;
	}
	return (ret);
}

/*void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	unsigned int	i;
	void			*ret;
	void			*tmp;

	ret = s1;
	tmp = intoarr(s2, n);
	i = 0;
	while (i < n)
	{
		if (tmp != NULL && s1 != NULL)
		{
			*(char *)s1 = *(char *)tmp;
			s1++;
			tmp++;
		}
		i++;
	}
	return (ret);
}
*/
void	*intoarr(const void *s2, size_t n)
{
	unsigned int	i;
	void			*ret;
	void			*tmp;

	i = 0;
	tmp = malloc(n);
	ret = tmp;
	while (i < n)
	{
		if (s2 != NULL && tmp != NULL)
		{
			*(char *)tmp = *(char *)s2;
			tmp++;
			s2++;
		}
		i++;
	}
	return ((char *)ret);
}
