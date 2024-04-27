/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkviria <gkviria@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 19:54:59 by gkviria           #+#    #+#             */
/*   Updated: 2023/06/26 14:57:51 by gkviria          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <bsd/string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	char			*temp;
	unsigned int	i;

	i = 0;
	while (*dest)
	{
		dest++;
		i++;
	}
	while (*src && i < size)
	{
		*dest = *src;
		src++;
		dest++;
		i++;
	}
	if (i > 0)
		*dest = '\0';
	else
	{
		*dest = '\n';
		dest++;
		*dest = '\0';
	}
	return (i);
}

/*int	main(void)
{
	char	tab[] = "";
	const char	*tab2;
	char	tab3[] = "";
	char	*tab4;
	size_t	result;
	size_t	result2;
	size_t size;
	size_t size2;

	size = sizeof(tab) + sizeof(tab2);
	size2 = sizeof(tab3) + sizeof(tab4);

	tab2 = "";
	tab4 = "";
	result = strlcat(tab, tab2, size);
	result2 = ft_strlcat(tab3, tab4, size2);
	printf("original\n%lu\n", result);
	printf("%s\n", tab);
	printf("mine\n%lu\n", result2);
	printf("%s", tab3);
	return (0);
}*/