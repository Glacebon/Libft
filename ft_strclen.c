/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkoskela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/02 16:10:57 by hkoskela          #+#    #+#             */
/*   Updated: 2020/03/02 16:12:54 by hkoskela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strclen(const char *str, char *c)
{
	size_t	count;

	count = 0;
	while (str[count] && str[count] != c)
		count++;
	return (count);
}
