/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 19:30:47 by agimi             #+#    #+#             */
/*   Updated: 2022/10/05 17:00:20 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*as;
	size_t			a;

	as = (unsigned char *)s;
	a = 0;
	while (n > a)
	{
		if (as[a] == (unsigned char)c)
			return (&as[a]);
		a++;
	}
	return (NULL);
}
