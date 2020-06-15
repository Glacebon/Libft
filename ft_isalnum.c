/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkoskela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 16:24:26 by hkoskela          #+#    #+#             */
/*   Updated: 2019/10/27 18:48:26 by hkoskela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isalnum(int n)
{
	if ((n >= '0' && n <= '9') || (n >= 'A' && n <= 'Z') ||
		(n >= 'a' && n <= 'z'))
		return (1);
	return (0);
}
