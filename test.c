/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkviria <gkviria@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 17:01:01 by gkviria           #+#    #+#             */
/*   Updated: 2023/08/20 15:48:55 by gkviria          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	ds[] = "vaja fshavela";
	char	ds2[] = "vaja fshavela";
	char	*sr = "traki";
	int		tmp;

	tmp = ft_strlcpy(ds, sr, 4);
	printf("my\n%s\n", ds);
	printf("%d\n", tmp);
}
