/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkviria <gkviria@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 19:54:59 by gkviria           #+#    #+#             */
/*   Updated: 2023/06/20 15:18:59 by gkviria          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// #include <stdio.h>
// #include <bsd/string.h>
// #include <string.h>

int	count_size(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		str++;
		i++;
	}
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	t;
	char			*tmp;

	t = 0;
	tmp = src;
	if (size == 0)
	{
		*dest = '\0';
		return (count_size(tmp));
	}
	while (*src != '\0' && t != size - 1)
	{
		if (size != 0)
			*dest = *src;
		src++;
		dest++;
		t++;
	}
	while (t++ < size)
	{
		*dest = '\0';
		dest++;
	}
	return (count_size(tmp));
}

/*int	main(void)
{
	char	ds[] = "vaja fshavela";
	char	ds2[] = "vaja fshavela";
	char	*sr = "traki";
	int		tmp;

	tmp = ft_strlcpy(ds, sr, 4);
	printf("my\n%s\n", ds);
	printf("%d\n", tmp);
	tmp = strlcpy(ds2, sr, 4);
	printf("orig\n%s\n", ds2);
	printf("%d", tmp);
	return (0);
}*/