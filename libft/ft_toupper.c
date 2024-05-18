/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kosta <kosta@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 19:54:59 by gkviria           #+#    #+#             */
/*   Updated: 2024/05/01 12:13:23 by kosta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// #include <stdio.h>

int	tmp(char ch)
{
	if ((ch > 31 && ch < 48) || (ch > 57 && ch < 65)
		|| (ch > 90 && ch < 97) || (ch > 122 && ch < 127))
	{
		return (1);
	}
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	char	*temp;
	int		i;

	temp = str;
	i = 0;
	while (*str)
	{
		if (*str > 96 && *str < 123)
		{
			if (i == 0 || tmp(*(str - 1)))
				*str = *str - 32;
		}
		else if ((*str > 64 && *str < 91) && !tmp(*(str - 1)))
		{
			if (i > 0)
				*str = *str + 32;
		}
		str++;
		i++;
	}
	str = temp;
	return (str);
}

/*int	main(void)
{
	char	tab[] = "!alut, coMMent tu vas ?
	42mots!QUaRante-deux; cinquante+et+un";
	char	*tab2;

	tab2 = ft_strcapitalize(tab);
	printf("%s", tab2);
	return (0);
}*/