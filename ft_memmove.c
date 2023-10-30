/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelvign <gdelvign@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 16:42:21 by gdelvign          #+#    #+#             */
/*   Updated: 2023/10/30 15:38:54 by gdelvign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*c_dst;
	char	*c_src;

	c_dst = (char *)dst;
	c_src = (char *)src;
	if (!c_dst && !c_src)
		return (NULL);
	i = 0;
	if (c_dst > c_src)
	{
		while (len-- > 0)
			c_dst[len] = c_src[len];
	}
	else if (c_dst < c_src)
	{
		while (i < len)
		{
			c_dst[i] = c_src[i];
			i++;
		}
	}
	return (dst);
}
