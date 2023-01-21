/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhellad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 15:05:29 by akhellad          #+#    #+#             */
/*   Updated: 2022/11/07 15:19:49 by akhellad         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	size_t	i;
	char	*str1;

	str1 = (char *)str;
	i = 0;
	while (i < n)
	{
		str1[i] = '\0';
		i ++;
	}
}
