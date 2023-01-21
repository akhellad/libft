/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhellad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 08:13:25 by akhellad          #+#    #+#             */
/*   Updated: 2022/11/08 18:09:43 by akhellad         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const char	*p1;
	const char	*p2;

	p1 = s1;
	p2 = s2;
	if (n == 0)
		return (0);
	while (n != 0)
	{
		if (*p1 != *p2)
			return ((unsigned char)(*p1) - (unsigned char)(*p2));
		else
		{
			p1 ++;
			p2 ++;
		}
		n --;
	}
	return (0);
}
