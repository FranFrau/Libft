/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffrau <ffrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 10:22:13 by ffrau             #+#    #+#             */
/*   Updated: 2022/01/18 12:15:34 by ffrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*dest_buff;
	unsigned char	*src_buff;

	dest_buff = (unsigned char *)dest;
	src_buff = (unsigned char *)src;
	while (n--)
		dest_buff[n] = src_buff[n];
	return ((void *) dest);
}
/*
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	index;

	if (!src && !dest)
		return (NULL);
	index = 0;
	while (index < n)
		((unsigned char *)dest)[index] = ((unsigned char *)src)[index];
	return (dest);
}

void  *ft_memcpy(void *dst, const void *src, size_t n)
{
  unsigned char  *cdst;
  unsigned char  *csrc;

  cdst = (unsigned char *) dst;
  csrc = (unsigned char *) src;
  if (cdst == NULL && csrc == NULL)
	return (NULL);
  while (n--)
	cdst[n] = csrc[n];
  return (dst);
}

*/