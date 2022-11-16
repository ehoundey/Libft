/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehoundey <ehoundey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 14:13:40 by ehoundey          #+#    #+#             */
/*   Updated: 2021/10/16 14:13:42 by ehoundey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*l;
	unsigned char	k;
	unsigned int	i;

	i = 0;
	k = (unsigned char)c;
	l = (unsigned char *)s;
	while (i < n)
	{
		if (l[i] == k)
			return ((void *)&l[i]);
		i++;
	}
	return (NULL);
}
