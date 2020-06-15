/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countwords.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkoskela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/15 20:27:35 by hkoskela          #+#    #+#             */
/*   Updated: 2020/06/15 20:33:30 by hkoskela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_countwords(char *str, char c)
{
	int	words;

	words = 0;
	while (*str != '\0')
	{
		while (*str == c)
			str++;
		if (*str != c && *str != '\0')
		{
			words++;
			while (*str != c && *str != '\0')
				str++;
		}
	}
	return (words);
}
