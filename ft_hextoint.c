/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hextoint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkoskela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/15 21:01:21 by hkoskela          #+#    #+#             */
/*   Updated: 2020/06/15 21:01:23 by hkoskela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

int			alphtonum(char c)
{
	int		n;
	int		i;

	n = 10;
	i = c;
	if (ft_isupper(c))
		n = n + i - 65;
	else
		n = n + i - 97;
	return (n);
}

int			ft_hextoint(char *hex)
{
	int	end;
	int	x;
	int	sum;
	int start;

	end = ft_strlen(hex) - 1;
	x = 0;
	sum = 0;
	start = -1;
	if (hex[0] == '0' && hex[1] == 'x')
		start = 1;
	while (end > start)
	{
		if (ft_isdigit(hex[end]))
			sum = sum + (hex[end] - '0') * ft_square(16, x);
		else
			sum = sum + alphtonum(hex[end]) * ft_square(16, x);
		end--;
		x++;
	}
	return (sum);
}
