/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 18:05:39 by agimi             #+#    #+#             */
/*   Updated: 2022/10/05 17:00:22 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t a)
{
	unsigned char	*sedst;
	unsigned char	*sesrc;

	sedst = (unsigned char *)dst;
	sesrc = (unsigned char *)src;
	if (!sedst && !sesrc)
		return (0);
	while (a > 0)
	{
		*sedst = *sesrc;
		sedst++;
		sesrc++;
		a--;
	}
	return (dst);
}
