/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkiehn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 20:52:48 by bkiehn            #+#    #+#             */
/*   Updated: 2018/11/26 18:01:35 by bkiehn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	ft_bzero(void *s, size_t n)
{
	int		i;
	char	*buf;

	i = 0;
	buf = (char*)s;
	while (n--)
	{
		buf[i] = 0;
		i++;
	}
}
