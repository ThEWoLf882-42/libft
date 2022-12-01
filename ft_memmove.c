/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 16:33:57 by agimi             #+#    #+#             */
/*   Updated: 2022/10/05 17:00:23 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t a)
{
	unsigned char	*t1;
	unsigned char	*t2;

	t1 = dst;
	t2 = (unsigned char *)src;
	if (dst < src)
		return (ft_memcpy(dst, src, a));
	if (dst > src)
		while (a--)
			t1[a] = t2[a];
	return (dst);
}
