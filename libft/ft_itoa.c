/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tterribi <tterribi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 10:45:07 by ffrau             #+#    #+#             */
/*   Updated: 2022/01/17 18:52:02 by tterribi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	oversize(int nb, int lengh, char *str)
{
	str[lengh--] = '8';
	return (nb /= 10);
}

void	translate(int i, int nb, char *str)
{
	while (nb > 0)
	{
		str[i] = (nb % 10) + '0';
		nb = nb / 10;
		i--;
	}
}

int	length(long nb)
{
	int	len;

	len = 0;
	if (nb < 0)
	{
		nb = nb * -1;
		len++;
	}
	while (nb > 0)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int nb)
{
	char	*str;
	int		i;

	i = length(nb);
	str = (char *) malloc(i + 1);
	if (!str)
		return (NULL);
	str[i--] = '\0';
	if (nb == 0)
	{
		str[0] = '0';
		return (str);
	}
	if (nb < 0)
	{
		str[0] = '-';
		if (nb == INT_MIN)
		{
			nb = oversize(nb, i, str);
			i--;
		}
		nb *= -1;
	}
	translate(i, nb, str);
	return (str);
}
