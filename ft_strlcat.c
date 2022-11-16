/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehoundey <ehoundey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 14:15:37 by ehoundey          #+#    #+#             */
/*   Updated: 2021/10/16 18:23:24 by ehoundey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlcat(char *dest, const char *src, size_t destsize)
{
	size_t	i;
	size_t	dsize;

	dsize = 0;
	while (dest[dsize] != '\0' && dsize < destsize)
		dsize++;
	i = dsize;
	while (src[dsize - i] && dsize + 1 < destsize)
	{
		dest[dsize] = src[dsize - i];
		dsize++;
	}
	if (i < destsize)
		dest[dsize] = '\0';
	return (i + ft_strlen(src));
}
